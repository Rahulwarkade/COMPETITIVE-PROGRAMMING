#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+7;

int graph[N][N];

vector<pair<int,int>> graphList[N];
int main()
{
	int n,m;
	cin>>n>>m;
//Adjencency Matrix
	//Space complexity = O(N^2) N<=10^3 or maximum 10^4
		for(int j=0; j<m; j++)
		{
			int v1,v2,wt;
			cin>>v1>>v2>>wt;

			graph[v1][v2] = wt;
			graph[v2][v1] = wt;
		}

		for(int i=1; i<n; i++)
		{
			for(int j=1; j<m; j++)
			{
				cout<<graph[i][j]<<" ";
			}
			cout<<endl;
		}

		if(graph[1][2]!=0)
			cout<<"connected "<<graph[4][6];
		else
		{
			cout<<"not connected";
		}
		//O(1);

		cout<<"\n";

//Adjencency List
	//Space Complexity : O(N+M)Or(V+M) N<=10^5 but M<=10^7;

		for(int i=0; i<m; i++)
		{
			int v1,v2,wt;
			cin>>v1>>v2>>wt;

			graphList[v1].push_back(make_pair(v2,wt));
			graphList[v2].push_back(make_pair(v1,wt));

		}

		for(int i=1; i<=n; i++)
		{
			cout<<i<<" -> ";
			for(pair<int,int> child : graphList[i])
			{
				cout<<"("<<child.first<<","<<child.second<<") ";
			}
			cout<<endl;
		}

	//Check connected edges
		//O(M)
		for(pair<int,int> child : graphList[3])
		{
			if(child.first==5)
			{
				cout<<"connected"<<endl;
			}
		}
}
