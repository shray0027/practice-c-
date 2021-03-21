#include<iostream>
using namespace std;

/*
	LOGIC
	_____
	sort012( arr , size )
	   from 1 to size
	   		if( arr[m] = 0)
	   			swap(arr[m],arr[l])
	   		    l++,m++
	   		if( arr[m] = 1)
				m++
			if( arr[m] = 2)
			    swap(arr[m],arr[r])
			    r--,m++

*/

void sort012(int*a,int n){
  int lo=0,mid=0,hi=n-1;
    while (mid <= hi) { 
        switch (a[mid]) { 
  
        // If the element is 0 
        case 0: 
            swap(a[lo++], a[mid++]); 
            break; 
  
        // If the element is 1 . 
        case 1: 
            mid++; 
            break; 
  
        // If the element is 2 
        case 2: 
            swap(a[mid], a[hi--]); 
            break; 
        } 
    } 
}

void print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[]={1,1,2,2,0,0};
	int n =6;
	sort012(a,n);
	print(a,n);
	return 0;
}