#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N],size[N];

void make(int v){
    parent[v]=v;
    size[v]=1;
}
int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]); //path compression
} 
void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
        //union by size
        if(size[a]<size[b])
            swap(a,b);
        parent[b]=a;
        size[a]+=size[b];
    }
}

int main(){
    int n,m; //n=node,m=edges
    cin>>n>>m;
    //pair<wt,>
    vector<pair<int,pair<int,int>>>edges;
    for (int i = 0; i < m; ++i)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    sort(edges.begin(),edges.end());
    for (int i = 1; i <=n; ++i)
    {
       make(i);
    }
    //find minimum
    int total_cost=0;
    for (auto &edge:edges)
    {
        int wt=edge.first;
        int u=edge.second.first;
        int v=edge.second.second;
        //check if loop exists or not
        if(find(u)==find(v)) continue; //if loop exists
        Union(u,v); 
        total_cost+=wt;
        cout<<u<<" "<<v<<endl;
    }
    cout<<total_cost<<endl;
}

/*Input:
6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2
3 2 3 
3 6 8
2 6 7
Output:
1 4
1 2
3 2
5 1
2 6
17
*/

//https://www.youtube.com/watch?v=xDrLSOxaFrA
