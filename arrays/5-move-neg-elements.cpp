#include<iostream>
using namespace std;

/*
  logic
  -----
  move()
      while lo<=hi
        if(a[lo]<0)
            lo++
        if(a[0]>=0)
            swap(lo,hi--)
*/

void move(int*a,int n){
	int lo=0,hi=n-1;
	while(lo<=hi){
		if(a[lo]<0){
			lo++;
		} else {
		   swap(a[hi--],a[lo]);
		}
	}
}
void print(int *a ,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[]={-1,2,-3,4};
	int n=4;
	move(a,n);
	print(a,n);
	return 0;
}