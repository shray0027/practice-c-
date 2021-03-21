#include<iostream>
using namespace std;

/* 
   logic
   -----
   * array -> sorted
     union()
        newarr.
        compare(len1,len2)
        |
        1 2 2 3 4 5
        2 3 5
        |
  */
void shift(int *a,int n,int k){
  for(int i=k;i<n;i++){
      a[i]=a[i+1];
  }
}
void print(int*t,int n){
  for(int i=0;i<n;i++){
    cout<<t[i]<<" ";
  }
  cout<<endl;
}
void doUnion(int *a ,int n,int *b,int m,int *c){
  sort(a,a+n);
  sort(b,b+m);
	 for(int i=0;i<n;i++){
	 	if(a[i]==a[i+1]){
	 		shift(a,n,i);
      i--;
      n--;
	 	}
	 }
   print(a,n);
     for(int i=0;i<m;i++){
      if(b[i]==b[i+1]){
      shift(b,m,i);
      i--;
      m--;
    }
   }
   int i=0,j=0,k=0;
   while(i<n and j<m){
    if(a[i]>b[j]){
      c[k++]=b[j++];
    } else if(a[i]<b[j]){
      c[k++]=a[i++];
    } else {
      c[k++]=a[i++];
      j++;
    }
   }
   while(i<n){
    c[k]=a[i];
    i++;
    k++;
   }
   while(j<m){
    c[k]=b[j];
    j++;
    k++;
   }
   print(c,k);
}


int main(){
  int n=2,m=6;
  int a[]={4,4},b[]={1 ,4 ,2 ,3 ,5 ,4},c[n+m];
  doUnion(a,n,b,m,c);
  
  return 0;
}



