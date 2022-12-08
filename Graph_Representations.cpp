#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Adjancency matrix representaion
	int n,m;
	cin>>n>>m;
	int arr[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			arr[i][j] = 0;
		}
	}

	for(int i=0; i<n; i++)
	{
		int v1,v2;
		cin>>v1>>v2;
		arr[v1][v2] = 1;
		arr[v2][v1] = 1;
	}

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	vector<int> graph[n+1];
	vector<pair<int,int>> graph[n+1];
	for(int i=0; i<m; ++i)
	{
		int v1,v2,wt;
		cin>>v1>>v2>>wt;

		graph[v1].push_back({v2,wt});
		graph[v2].push_back({v1,wt});
	}


	for(int i=1; i<=n; ++i)
	{
		for(int j=0; j<graph[i].size(); ++j)
		{
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}

	for(auto &g : graph)
	{
		for(auto &gc : g)
		{
		cout<<gc.first<<" "<<gc.second<<endl;
		}
	}
   
	return 0;
}
