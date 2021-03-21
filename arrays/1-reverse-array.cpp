#include<iostream>
using namespace std;

/* 
	LOGIC
------------
	reverse()
    	 from 1 to n/2
        	swap(a[i],a[n-i]) */


void reverse(int *a,int n){
	for(int i=0;i<=n/2;i++){
		swap(a[i],a[n-i-1]);
	}
}
void print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[]={1,2,3,4,5};
	int n=5;
	reverse(a,n);
	print(a,n);
	return 0;
}