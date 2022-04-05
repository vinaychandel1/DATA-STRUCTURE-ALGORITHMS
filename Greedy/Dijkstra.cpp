#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+10;

//pair<node,weight>
vector<pair<int,int>>g[N];

void dijkstra(int source){
  vector<int> vis(N,0);
  vector<int> dist(N,INF);

  //we want sorted element according to weight 
  set<pair<int,int>>st; //weight,node
  st.insert({0,source});
  dist[source]=0;
  while(st.size()>0){
    auto node=*st.begin();
    int v=node.second;
    int v_wt=node.first;
    st.erase(st.begin());
    if(vis[v]) continue;
    vis[v]=1;
    for (auto child:g[v])
    {
      int child_v=child.first;
      int wt=child.second;
      if(dist[v]+wt<dist[child_v]){
        dist[child_v]=dist[v]+wt;
        st.insert({dist[child_v],child_v});
      }
    }
  }
}

int main(){
int n,m; //n=vertices,m=edges
for (int i = 0; i < m; ++i)
{
  int x,y,wt;
  cin>>x>>y>>wt;
  g[x].push_back({y,wt});
}

}
