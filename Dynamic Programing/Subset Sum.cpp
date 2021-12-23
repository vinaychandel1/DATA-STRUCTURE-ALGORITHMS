// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    inline bool isSubsetSum(int n, int arr[], int sum){
        bool dp[n+1][sum+1];
       // bool dp[0][0]=1;
        for(int i=0;i<=n;i++)
        dp[i][0]=1;
        for(int i=1;i<=sum;i++)
        dp[0][i]=0;
        for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
        if(j<arr[i-1]) dp[i][j]=dp[i-1][j];
        if(j>=arr[i-1]) dp[i][j]=(dp[i-1][j-arr[i-1]]||dp[i-1][j]);}}
        return dp[n][sum];
        /*if(sum==0) return true;
        if(N==0) return false;
        if(sum<arr[N-1]) return isSubsetSum(N-1,arr,sum);
        else
        return (isSubsetSum(N-1,arr,sum-arr[N-1])||isSubsetSum(N-1,arr,sum));*/
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=4&query=category[]Dynamic%20Programmingpage4category[]Dynamic%20Programming#
