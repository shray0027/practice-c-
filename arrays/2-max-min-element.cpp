#include<iostream>
#include<climits>
using namespace std;

/*
    LOGIC
    -----
    traverse()
        from 1 to n
            min_element=min(min_element,a[i])
            max_element=max(max_element,a[i])
*/

void max_min(int*a,int n){
	int minEl=INT_MAX,maxEl=INT_MIN;
	for(int i=0;i<n;i++){
		minEl=min(minEl,a[i]);
		maxEl=max(maxEl,a[i]);
	}
	cout<<"minimum element is :"<<minEl<<endl;
	cout<<"maximum element is :"<<maxEl<<endl;
}
int main(){
	int a[]={1,2,3,4,5};
	int n=5;
	max_min(a,n);
	return 0;
}