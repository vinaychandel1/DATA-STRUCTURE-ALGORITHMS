#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<=r;j++){
        if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
 void  quickSort(int arr[],int l,int r){
     if(l<r){
         int pi=partition(arr,l,r);
         quickSort(arr,l,pi-1);
         quickSort(arr,pi+1,r);
     }  
 }
 
int main()
{
   int arr[]={34,3,8,1,98,35,67,87};
   int size=sizeof(arr)/sizeof(arr[0]);
   quickSort(arr,0,size-1);
   for(int i=0;i<=size-1;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
