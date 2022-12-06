#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
vector<int> graph[N];
int parent[N];

void dfs(int v,int ancestor=-1)
{
	parent[v] = ancestor;
	for(int child : graph[v])
	{
		if(child!=ancestor)
			dfs(child,v);
	}
}

vector<int> path(int vertex)
{
	vector<int> ans;
	while(vertex!=-1)
	{
		ans.push_back(vertex);
		vertex = parent[vertex];
	}

	reverse(ans.begin(),ans.end());
	return ans;
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

	int x,y;
	cin>>x>>y;

	vector<int> x_path = path(x);
	vector<int> y_path = path(y);

	int mnl = min(x_path.size(),y_path.size());

	int lca = -1;
	for(int i=0; i<mnl; i++)
	{
		if(x_path[i]==y_path[i])
		{
			lca = x_path[i];
		}
		else{
			break;
		}
	}

	cout<<lca<<endl;
}
