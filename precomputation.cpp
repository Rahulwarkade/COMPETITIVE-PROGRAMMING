#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> tree[N]; 
int subtree_sum[N];
int even_ct[N];

void dfs(int vertex,int par = -1)
{
	// cout<<vertex<<"   ";
	if(vertex%2==0)
	{
		even_ct[vertex]++;
	}
	 subtree_sum[vertex] += vertex;

	for(int &child : tree[vertex])
	{
	   if(child == par) continue;
	   dfs(child,vertex);
	   subtree_sum[vertex] += subtree_sum[child];
	   even_ct[vertex] += even_ct[child];
	}
    // subtree_sum[vertex] += vertex;

}

int main()
{
	int v;
	cin>>v;

	for(int i=0; i<v-1; ++i)
	{
	 int x,y;
	 cin>>x>>y;
     tree[x].push_back(y);
     tree[y].push_back(x);
	}

	dfs(1);
    // cout<<endl;
	for(int i=1; i<=v; ++i)
	{
		cout<<i<<" = "<<subtree_sum[i]<<" = " <<even_ct[i]<<endl;
	}
}