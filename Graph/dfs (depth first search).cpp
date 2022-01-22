#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    /** Take action on vertex after entering the vertex**/
    //if(vis[vertex]) return;
    cout<<"vertex:"<<vertex<<endl;
    vis[vertex]=1; 
    for (int child:g[vertex])
    {
        cout<<"parent:"<<vertex<<"child:"<<child<<endl;
        if(vis[child]) continue;
    /* Take action on child before entring the child*/
        dfs(child);
    /*Take action on child after exiting child node*/
    }
    /*Take action on vertex before exiting the vertex*/
}

int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 0; i <m; ++i)
    {
       int v1,v2;
       cin>>v1>>v2;
       g[v1].push_back(v2);
       g[v2].push_back(v1);
    }
    dfs(1);
}
/*Input:
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/
