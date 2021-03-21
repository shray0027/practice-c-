#include<iostream>
#include<algorithm>
using namespace std;

/*
     LOGIC
     -----
	 kth_max_min( arr , size , k)
	    sort(arr)
		min_element=a[k-1]
		max_element=a[n-k]

*/
void kth_max_min(int*a,int n,int k){
	sort(a,a+n);
	cout<<"kth minimum element is : "<<a[k-1]<<endl;
	cout<<"kth maximmum element is : "<<a[n-k]<<endl;
}

int main(){
	int a[]={1,2,3,4,5};
	int n=5,k=5;
	kth_max_min(a,n,k);
	return 0; 
}
