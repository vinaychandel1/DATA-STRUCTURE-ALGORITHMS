// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends


class Solution{
    public:
        long long pairWithMaxSum(long long a[], long long n)
    {
       if (N < 2)
        {
            return -1;
        }
        
        long long res = arr[0] + arr[1];
        
        for(int i = 1; i < N-1; i++)
        {
            res = max(res, arr[i] + arr[i+1]);
        }
        
        return res;
    }
};



// { Driver Code Starts.
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}

  // } Driver Code Ends
