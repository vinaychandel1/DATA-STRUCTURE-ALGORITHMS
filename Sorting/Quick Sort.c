#include<stdio.h>
#include<algorithm>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition (int arr[], int start, int end) 
{ 
    int pivot = arr[end]; 
    int pIndex = start-1; 
 
    for (int i = start; i <end; i++) 
    { 
        if (arr[i] < pivot) 
        { 
            pIndex++;
            swap(&arr[pIndex], &arr[i]); 
        } 
    } 
    swap(&arr[pIndex+1], &arr[end]); 
    return pIndex+1; 
} 
void quickSort(int arr[], int start, int end) 
{ 
    if (start < end) 
    {
        int pi = partition(arr, start, end); 
        quickSort(arr, start, pi - 1); 
        quickSort(arr, pi + 1, end); 
    } 
} 
int main()
{
 int arr[]={6,5,7,8,3,9,12,17};
 int size=sizeof(arr)/sizeof(arr[0]);
 quickSort(arr,0,size-1);
 for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) 
        printf("%d ",arr[i]); 
   return 0;
}
