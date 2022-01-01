#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int>g[N];
bool visited[N];

bool dfs(int vertex,int parent){
	visited[vertex]=true;
	bool isloopexists=false;
	for(int child:g[vertex]){
	    if(visited[child] && child==parent) continue;
	    if(visited[child]) return true;
		if (!visited[child]){
		isloopexists= (isloopexists|| dfs(child,vertex));
		}
	}
return isloopexists;
}
int main() {
	int n,e;
	cin>>n>>e;
	for(int i=0;i<e;i++){
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int count=0;bool isloopexists=false;
	for(int i=1;i<=n;i++){
		if(visited[i]) continue;
		if(dfs(i,0)){
		    isloopexists=true;
		    break;
		
		}
	}
	cout<<isloopexists;
	
}



// input
/*
8 6
1 2
2 3
2 4
3 5
6 7
1 5
*/
