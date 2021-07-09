#include<bits/stdc++.h>
using namespace std;

struct item{
	double value,weight,valueperweight;
};

bool compare(item i1, item i2) {
return i1.valueperweight > i2.valueperweight;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<item>items;
	for (int i = 0; i <n; ++i)
	{
		double v,w;
		cin>>v>>w;
		items.push_back({v,w,v/w});
	}
	double W;
	cin>>W;
	sort(items.begin(),items.end(),compare);
	double ans=0;
	for (int i = 0; i < n; ++i)
	{
		if (W>=items[i].weight)
		{
			W-=items[i].weight;
			ans+=items[i].value;
		}
		else
		{
			ans+=W*items[i].valueperweight;
			W=0;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
