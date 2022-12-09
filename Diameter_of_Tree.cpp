#include<bits/stdc++.h>
using namespace std;
const int N = 1e2;
vector<int> graph[N];
int depth[N];

void dfs(int vertex,int parent = -1)
{
	for(int child : graph[vertex])
	{
		if(child!=parent)
		{
			depth[child] = depth[vertex]+1;
			dfs(child,vertex);
		}
	}
}
int main()
{
	int n;
	cin>>n;

	for(int i=1; i<=n-1; i++)
	{
		int x,y;
		cin>>x>>y;

		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	dfs(1);

	int maxdepth = -1;
	int maxdepth_node;

	for(int i=1; i<=n; i++)
	{
		if(maxdepth<depth[i])
		{
			maxdepth = depth[i];
			maxdepth_node = i;
		}
		depth[i] = 0;
	}
	dfs(maxdepth_node);
	maxdepth = -1;
	for(int i=1; i<=n; i++)
	{
		if(maxdepth<depth[i])
		{
			maxdepth = depth[i];
		}
	}

	cout<<maxdepth<<endl;

}
