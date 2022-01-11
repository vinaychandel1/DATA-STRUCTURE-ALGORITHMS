#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int depth[N];

void dfs(int vertex,int par=-1){
	for (int child:g[vertex])
	{if(child==par) continue;
		depth[child]=depth[vertex]+1;
		dfs(child,vertex);
	}
}
int main()
{   int n;cin>>n;
	for (int i = 1; i <n; ++i){
	    int x,y;
		cin>>x>>y;
		g[x].push_back(y); 
		g[y].push_back(x);
	}
	dfs(1);
	int maxdepth=-1;
	int maxnode;
	for (int i = 1; i <=n; ++i){
		if(maxdepth<depth[i]){
			maxdepth=depth[i];
			maxnode=i;
		}
		depth[i]=0;
	}
		cout<<maxnode;
	dfs(maxnode);
	for (int i = 1; i <=n; ++i)
	{
		if(maxdepth<depth[i])
		{
			maxdepth=depth[i];
		}
	}
	cout<<"\n"<<maxdepth;
	return 0;
}
/*Input:
13
1 2
1 3
1 13
2 5
5 6
5 7
5 8
8 12
3 4
4 9
4 10
10 11
9 11
*/

// https://www.youtube.com/watch?v=m8qXEz1Xe8w&list=LL&index=14
