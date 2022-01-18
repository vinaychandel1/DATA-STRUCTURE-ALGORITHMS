#include <bits/stdc++.h>
using namespace std;
  vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subset_ct=1<<n;
        vector<vector<int>>subsets;
        for (int mask=0;mask<subset_ct;mask++) {
          vector<int>subset;
          for (int i = 0; i < n; i++) {
               if((mask & (1<<i))!=0){
                  subset.push_back(nums[i]);
              }
          }
          subsets.push_back(subset);
        }
        return subsets;
    }
int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    auto allsubsets=subsets(v);
    for(auto subset:allsubsets){
        for(int x:subset){
           cout<<x<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}

// https://leetcode.com/problems/subsets/
// https://www.youtube.com/watch?v=wpWGDHmpbgA
