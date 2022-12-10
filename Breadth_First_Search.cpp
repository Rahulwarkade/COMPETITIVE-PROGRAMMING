#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> tree[N];
int vis[N];

void bfs(int vertex)
{
	queue<int> q;
	q.push(vertex);
	vis[vertex] = 1;
	while(!q.empty())
	{
		int top;
		top = q.front();
		cout<<top<<" ";
		q.pop();
		for(int &child : tree[top])
		{
			if(vis[child]) continue;
			q.push(child);
			vis[child] = 1;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n-1; ++i)
	{
		int x,y;
		cin>>x>>y;
		tree[x].push_back(y);
		tree[y].push_back(x);

	}
	bfs(1);
}
