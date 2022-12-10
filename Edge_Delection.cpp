#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> tree[N];
int sub_tree_sum[N];
int tree_value[N] = {10,5, 12,6};
const int M = 1e9+7;
void dfs(int vertex,int par=-1)
{
	sub_tree_sum[vertex] += tree_value[vertex-1];
	for(int &child : tree[vertex])
	{
		if(child == par) continue;
		dfs(child,vertex);
		sub_tree_sum[vertex] += sub_tree_sum[child];
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n-1; i++)
	{
		int x,y;
		cin>>x>>y;
		tree[x].push_back(x);
		tree[y].push_back(y);
	}
	dfs(1);
	long long int ans = INT_MIN;
	for(int i=2; i<=n; i++)
	{
		int part1 = sub_tree_sum[i];
		int part2 = sub_tree_sum[1]- part1;
		ans = max(ans,(part1*1LL*part2)%M);
	}
		cout<<ans<<endl;
}
