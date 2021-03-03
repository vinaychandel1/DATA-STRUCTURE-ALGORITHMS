#include<stdio.h>
#include<algorithm>

using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition(int arr[],int start,int end){
    int pivot=arr[end],pIndex=start;
    int i;
    for(i=start;i<end;i++){
        if(arr[i]<pivot){
            swap(&arr[i], &arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[pivot],&arr[pIndex]);
    return pIndex;
}
void quickSort(int arr[],int start, int end){
    while(start<end){
        int pIndex=partition(arr,0,end);
 partition(arr,0,pIndex-1);
 partition(arr,pIndex+1,end);
    }
    
}

int main()
{
 int arr[]={6,5,7,8,3,9,12,17};
 int size=sizeof(arr)/sizeof(arr[0]);
 quickSort(arr,0,size-1);
 //printArray(arr, size);
 for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
        printf("%d",arr[i]); 
    printf("Hello");
   return 0;
}
