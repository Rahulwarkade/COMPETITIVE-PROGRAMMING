#include <bits/stdc++.h>
using namespace std;
int main() {
	// int t;
	// cin>>t;

	// while(t--)
	// {
	// 	long long x;
	// 	cin>>x;
	// 	cout<<__builtin_popcountll(x)<<"\n";
	// }

	int c;
	cin>>c;

	int lenc = (int)log2(c)+1;

	int a = 0,b=0;
	vector<int> bitposition;
	for(int i=0; i<lenc; i++)
	{
		if((c>>i)&1)
		{
			bitposition.push_back(i);
		}
		else{
			a |= (1<<i);
			b |= (1<<i);
		}
	}

	int mask = bitposition.size();
	int n = (1<<mask);
	long long ans = INT_MIN;
	for(int i=0; i<n; i++)
	{
		int ansA = a,ansB=b;
		for(int j=0; j<mask; j++)
		{
			if((i>>j)&1)
			{
				ansA |= (1<<bitposition[j]);
			}
			else
			{
				ansB |= (1<<bitposition[j]);
			}
		}

		ans = max(ans,ansB*1LL*ansA);
	}

	cout<<ans<<endl;
}