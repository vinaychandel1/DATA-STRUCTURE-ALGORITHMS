#include <bits/stdc++.h>
const int N=1e7;
int a[N];

using namespace std;
int main() {

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<endl;
    }
    int total=0;
    for (int i = 0; i < n; i++)
    {
        total+=a[i]*(n-i)*(i+1);
    }
    cout<<total;
    return 0;
}
