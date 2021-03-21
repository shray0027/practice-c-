#include<iostream>
using namespace std;
/* 
   LOGIC
   -----
   a[i]=a[i-1];
 */

void rotate(int *a,int n){
	int last=a[n-1];
	for(int i=n-1;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=last;
}
void rotateK(int a[],int n,int k){
	for(int i=0;i<n;i++){
		i>=k?cout<<a[i-k]<<" ":cout<<a[n+i-k]<<" ";
	}
}
void print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n=5;
	int a[]={1,2,3,4,5};
	rotateK(a,n,2);
	//print(a,n);
	return 0;
}