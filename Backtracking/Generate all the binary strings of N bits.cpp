#include <iostream>
using namespace std;
 void generate(int A[],int l,int r){
     if(l==r){
         for(int i=0;i<r;i++)
         cout<<A[i]<<" ";
         cout<<endl;
         return;
     }
     A[l]=0;
     generate(A,l+1,r);
     A[l]=1;
     generate(A,l+1,r);
 }
int main()
{ 
int n; cin>>n;
int A[n];
generate(A,0,n);
return 0;
}
