#include <bits/stdc++.h>
using namespace std;
const int N=1e7;
int a[N];
 int kadane(int a[],int n){
 	int local_max=0,global_max=INT_MIN,starts_index=0,end_index=0;
 	for (int i = 0; i < n; i++)
 	{   
 		local_max=max(a[i],a[i]+local_max);
 		if(local_max==a[i]){starts_index=i;}
 		//global_max=max(global_max,local_max);
 		if(global_max<local_max){global_max=local_max;end_index=i;}
 	}
 	cout<<"starts_index:"<<starts_index<<"\nend_index:"<<end_index<<endl;
 	return global_max;
 }
using namespace std;
int main() {
	int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
   int c=kadane(a,n);
   cout<<c;
    return 0;
}
