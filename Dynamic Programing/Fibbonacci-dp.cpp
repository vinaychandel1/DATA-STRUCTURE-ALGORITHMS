#include <bits/stdc++.h>

using namespace std;

int fibo(int n, vector<int> &dp) {
    int i = 0;
    if(n <= 1)
        return n;
    // check if previously visited state has been visited or not 
    if(dp[n] != -1)
        return dp[n];
    else
        dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
    return dp[n];
}


int main() {
    int n;
    cin >> n;
    // initially mark every element as -1 
    // which means none of them have been visited 
    vector<int> dp(n+1, -1);
    int ans = fibo(n, dp);
    cout << ans;
}
