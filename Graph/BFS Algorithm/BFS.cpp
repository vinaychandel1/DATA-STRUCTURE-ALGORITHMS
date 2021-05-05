#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    vector<int>bfsOfGraph(int N, vector<int> g[])
    {
       vector<int> visited(N, 0);
queue<int> q;
vector<int> result;

q.push(0);
while(!q.empty())
{
int u = q.front();
q.pop();
result.push_back(u);
for(auto e : g[u])
{
if(visited[e] == false)
{
q.push(e);
visited[e] = true;
}
}
}
return result;
    }
};

// { Driver Code Starts.
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];
      
      //making adjacency list
        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
    //      adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  
