#include<bits/stdc++.h>
using namespace std;
const int N = 300;
vector<int> graph[N];
int heightT[N];
int depth[N];
int visite[N];
void treeHeight(int vertex)
{
	visite[vertex] = 1;
	// cout<<vertex<<" ";
	for(int child : graph[vertex])
	{
		if(!visite[child]){
			depth[child] = depth[vertex]+1;
			treeHeight(child);
			heightT[vertex] = max(heightT[vertex],heightT[child]+1);
			// cout<<heightT[vertex]<<endl;
		}
	}
	// cout<<heightT[vertex]<<endl;
	// return heightT[vertex];
}

int main()
{
	int n,m; 
	cin>>n>>m;

// vector<int> graph[n];
// 	int heightT[n];
// 	int visite[n];
	for(int i=1; i<=m; i++)
	{
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}


	treeHeight(1);

	for(int i=1; i<=n;++i){
		cout<<i<<" h = "<<heightT[i]<<" d = "<<depth[i]<<endl;
	}
}
