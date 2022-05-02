#include<bits/stdc++.h>
using namespace std;
const int N+1e5+10;
int parent[N],size[N];

void make(int v){
    visited[v]=v;
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
        size[a]+=size[b;]
    }
}

int main(){
    int n,k; //n=node.k=edges
    cin>>n>>k;
    for (int i = 1; i <=n; ++i)
    {
        make(i);
    }
    while(k--){
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    int connected_ct=0;
    for (int i = 1; i <=n; ++i)
    {
       if(find(v)==v) connected_ct++;
    }
}
