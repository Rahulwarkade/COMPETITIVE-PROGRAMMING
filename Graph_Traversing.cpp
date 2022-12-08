#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> v[N];
bool vis[N];

void dfs(int vertex)
{
    if(vis[vertex]) return;
	cout<<vertex<<endl;
	vis[vertex] = true;
	for(int &child : v[vertex])
	{
		cout<<"par : "<<vertex<<", child : "<<child<<endl;
	   dfs(child);
	}

}

int main()
{
	int nv,ne;
	cin>>nv>>ne;

	for(int i=0; i<ne; ++i)
	{
	   int v1,v2;	
	   cin>>v1>>v2;
	   v[v1].push_back(v2);
	   v[v2].push_back(v1);
	}

	dfs(1);
	return 0;
}
