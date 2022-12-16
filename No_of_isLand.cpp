#include<bits/stdc++.h>
using namespace std;
const int N = 300;
int visite[N][N];
void dfs(int i,int j,vector<vector<char>>& grid)
{
	int n = grid.size();
	int m = grid[0].size();
	if(i<0 || j<0) return;
	if(i>=n || j>= m) return;
	if(grid[i][j]=='0' || visite[i][j]==1) return;

	visite[i][j] = 1;
	dfs(i-1,j,grid);
	dfs(i+1,j,grid);
	dfs(i,j-1,grid);
	dfs(i,j+1,grid);
}
int numIslands(vector<vector<char>>& grid) {
	int Islands = 0; 
	int n = grid.size();
	int m = grid[0].size();

        for(int i=0; i<n; i++)
        {
        	for(int j=0; j<m; j++)
        	{
        		if(grid[i][j]=='1'&& visite[i][j]!=1)
        		{
        			dfs(i,j,grid);
        			Islands++;
        		}
        	}
        }
    return Islands;
}

int main()
{
	vector<vector<char>> grid;
	int n,m;
	cin>>n>>m;

	for(int i=0; i<n; i++)
	{
		vector<char> temp;
		for(int j=0; j<m; j++)
		{
			char ch; 
			cin>>ch;
			temp.push_back(ch);
		}
		grid.push_back(temp);
	}

	cout<<numIslands(grid)<<endl;
	

}