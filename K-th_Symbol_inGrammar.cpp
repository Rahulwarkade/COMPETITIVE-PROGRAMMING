#include<bits/stdc++.h>
using namespace std;


int kthGrammar(int n, int k) {
       
       vector<int> varr[n+3];
       varr[0].push_back(0);
       varr[1].push_back(0);
       int i =1;
       int ci = 2;
       while(i<=n)
       {

       	for(int j=0; j<varr[i].size(); j++)
       	{
       		if(varr[i][j]==0)
       		{
       			varr[ci].push_back(0);
       			varr[ci].push_back(1);
       		}
       		else
       		{
       			varr[ci].push_back(1);
       			varr[ci].push_back(0);
       		}
       	}
       	i++;
       	ci++;
       }

       return varr[n][k-1];
}

int main()
{
	int n,k;
	cin>>n>>k;

	cout<<kthGrammar(n,k);
}