#include<iostream>
#include<climits>
using namespace std;
/* logic

from 0 to n
   from i to n
      from i to j 
        sum+=a[k]

*/
void on3(int *a,int n){
	int maxSum=INT_MIN,l,r;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<j;k++){
				sum+=a[k];
			}
			if(sum>maxSum){
				l=i;
				r=j-1;
				maxSum=sum;
			}
		}
	}
	cout<<maxSum<<endl;
	cout<<l<<" "<<r<<endl;
}

void on2(int *a,int n){
	int maxSum=INT_MIN,l,r;
	int cummSum[1000000]={0};
	int currSum=0;
	cummSum[0]=a[0];
	for(int i=1;i<n;i++){
		cummSum[i]=a[i]+cummSum[i-1];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			i==0?currSum=cummSum[j]:currSum=cummSum[j]-cummSum[i-1];
			if(currSum>maxSum){
				maxSum=currSum;
				l=i;
				r=j;
			}
		}
	}
	cout<<maxSum<<endl;
	cout<<l<<" "<<r<<endl;
}
// kadanes
void on(int *a,int n){
	int max_so_far=0;
	int max_ending_here=0;
	for(int i=0;i<n;i++){
		max_ending_here=max_ending_here+a[i];
		if(max_ending_here>max_so_far){
			max_so_far=max_ending_here;
		}
		if(max_ending_here<0){
			max_ending_here=0;
		}
	}
	cout<<max_so_far<<endl;
}

int main(){
	int n=5;
	int a[]={1,2,-1,5,-3};
	on3(a,n);
	on2(a,n);
	on(a,n);
	return 0;
}
