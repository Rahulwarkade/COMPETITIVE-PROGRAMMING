#include<bits/stdc++.h>
using namespace std;

// vector<int> sorted(vector<int> a1,vector<int> a2)
// 	{
// 		int n = a1.size();
// 		vector<int> ans(n);
// 		int st = 0;
// 		int j = 0;
		
// 		while(j<a2.size())
// 		{
// 			// vector<int> :: iterator it = a1.find(a2[j]);
// 			auto it = find(a1.begin(), a1.end(), a2[j]);
// 			if(it != a1.end())
// 			{
// 				ans[st] = a2[j];
// 				a1.erase(it);
// 				st++;
// 			}
// 			else

// 			{
// 				j++;
// 			}
// 		}


// 		for(int j = 0,i=st; i<n; i++,j++)
// 			ans[i] = a1[j];

// 		sort(ans.begin()+st,ans.end());

// 		return ans;
// 	}

int main()
{
	int t;
	cin>>t;

// BRUTE FORCE APPROACH

	// while(t--)
	// {
	// 	int n,m;
	// 	cin>>n;
	// 	vector<int> a1(n);

	// 	for(int i=0; i<n; i++)
	// 		cin>>a1[i];

	// 	cin>>m;
	// 	vector<int> a2(m);

	// 	for(int i=0; i<m; i++)
	// 		cin>>a2[i];

	// 	vector<int> ans = sorted(a1,a2);

	// 	for(int &el : ans)
	// 		cout<<el<<" ";

	// 	cout<<"\n";
	// }


// OPTIMIZED APPROACH

	while(t--)
	{
		int n,m;
		cin>>n;

		multiset<int> a1;

		for(int i=0; i<n; i++)
		{
			int x;
			cin>>x;
			a1.insert(x);
		}

		cin>>m;

		for(int i=0; i<m; i++)
		{
			int x;
			cin>>x;


			int count = a1.count(x);
			while(count--)
			{
				cout<<x<<" ";
			}
			a1.erase(x);
		}

		for(auto &el : a1)
		{
			cout<<el<<" ";
		}

		cout<<"\n";
	}
}