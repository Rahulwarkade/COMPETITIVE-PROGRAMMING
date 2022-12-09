#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> tree[N];
vector<int> vac;

int depth[N];
int height[N];

void dfs(int vertex,int par=0)
{
	vac.push_back(vertex);
	for(int &child : tree[vertex])
	{
	  if(child == par) continue;
	  depth[child] = depth[vertex]+1;
	  dfs(child,vertex);
	  height[vertex] = max(height[vertex],height[child]+1) ;
	}
}

int main()
{
	int n;
	cin>>n;

	for(int i=0; i<n-1; ++i)
	{
	  int v,e;
	  cin>>v>>e;
	  tree[v].push_back(e);
	  tree[e].push_back(v);
	}

	dfs(1);
    cout<<"Node    depth    height "<<endl;
	for(int i=1; i<=n; i++)
	{
		cout<<vac[i-1]<<"    =    "<<depth[i]<<"      "<<height[i]<<endl;
	}

}
