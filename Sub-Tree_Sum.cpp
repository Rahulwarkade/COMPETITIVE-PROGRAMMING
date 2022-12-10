#include<bits/stdc++.h>
using namespace std;
const int N = 1e2+7;
vector<int> graph[N];
// int value[N];
int subtree_sum[N];
int even_ct[N];
void subtree_sm(int vertex,int parent)
{
	for(int child : graph[vertex])
	{
		if(child!=parent){
			subtree_sm(child,vertex);
			subtree_sum[vertex] += subtree_sum[child];
			even_ct[vertex] += even_ct[child];
		}
	}
	subtree_sum[vertex] += vertex;
	if(vertex%2==0)
		even_ct[vertex]++;
}
int main()
{
	int n;
	cin>>n;


	for(int i=0; i<n-1; i++)
	{
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);

	}

	subtree_sm(1,0);

	int q;
	cin>>q;

	while(q--)
	{
		int v;
		cin>>v;

		cout<<subtree_sum[v]<<endl;
		cout<<even_ct[v]<<endl;
	}
}
