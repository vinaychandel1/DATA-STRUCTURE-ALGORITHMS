//#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void search(int arr[][4],int rows, int cols,int k){
    int start=0, end=(rows*cols)-1,mid,flag=0;
    while(start<end){
         mid=(start+end)/2;
         int middleElement=(arr[mid/cols][mid%cols]);
         if(middleElement==k){
             cout<<"element found at position arr["<<mid/cols<<"]["<<mid%cols<<"]";
             flag=1;
         }
         else if(middleElement>k){
             end=mid-1;
         }
         else{
            start=mid+1;
         }
        if(flag==1)
        break;
    }
}


int main()
{ int k;
    int arr[][4]={
    {2,5,6,8},
{9,10,12,14},
{16,18,19,100}
    };
    int rows=sizeof(arr)/sizeof(arr[0]);//Number of Rows
  int cols=sizeof(arr[0])/sizeof(arr[0][0]);//Number of Columns
 cout<<"Enter the element to search:";
 cin>>k;
 search(arr,rows,cols,k);
   return 0;
}
  
