// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    long long numberOfWays(int coins[],int numberOfCoins,int value)
    { 
      int n=numberOfCoins+1;
       int v=value+1;
      int dp[n][v];
      for(int i=0;i<=n;i++)
        dp[i][0]=1;
        for(int i=1;i<=value;i++)
        dp[0][i]=0;
      dp[0][0]=1;
      for(int i=1;i<=numberOfCoins;i++){
      for(int j=1;j<=value;j++){
     if(coins[i-1]>j){
              dp[i][j]=dp[i-1][j];
          }
          else
          dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
          
      }   
      }
      return dp[numberOfCoins][value];
        
    }
};


// { Driver Code Starts.


int main() {
    
    //taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //inserting coins to the array
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function numberOfWays
	    cout<<obj.numberOfWays(coins,numberOfCoins,value)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
// https://practice.geeksforgeeks.org/problems/coin-change-number-of-ways/1/#
