#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int>g[N];
bool visited[N];
vector<vector<int>>cc;
vector<int>current_cc;

void dfs(int vertex){
	visited[vertex]=true;
	current_cc.push_back(vertex);
	for(int child:g[vertex]){
		if (!visited[child]){
		dfs(child);
		}
	}

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
	int count=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
		    current_cc.clear();
		dfs(i); 
		cc.push_back(current_cc);
		count++;
		}
	}										 
	cout << count<<endl;
	
	//connected components
	for(auto c_c:cc){
	for(int curr:c_c){
	    cout<<curr<<" ";
	}cout<<endl;}
	
}



// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
