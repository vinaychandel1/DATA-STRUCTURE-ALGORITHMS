#include <iostream>

using namespace std;

void bubblesort(int arr[],int size){
    int flag=0;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    
  for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
  }  
}

int main()
{ int arr[]={23,6,7,2,7,3,12,56,86,43,90,100};
  int size=sizeof(arr)/sizeof(arr[0]);
  bubblesort(arr,size);
   return 0;
}
