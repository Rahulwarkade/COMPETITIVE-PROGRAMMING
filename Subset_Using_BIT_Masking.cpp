#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> subSet(vector<int> sub)
{
	int idx = sub.size();
	int n = (1<<idx);
	vector<vector<int>> ans;

	
	for(int i=0; i<n; i++)
	{
		vector<int> set;
		for(int j=0; j<idx; j++)
		{			
			if((i>>j)&1!=0)
			{
				set.push_back(sub[j]);
			}
		}
		ans.push_back(set);
	}

	return ans;
}


int main()
{
	int n;
	cin>>n;

	vector<int> v;

	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}

	vector<vector<int>> set = subSet(v);

	for(auto subset : set)
	{
		for(auto el : subset)
		{
			cout<<el<<" ";
		}
		cout<<endl;
	}
}