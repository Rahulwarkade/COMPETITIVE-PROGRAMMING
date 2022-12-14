#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

int hsh[N];
int multiples_ct[N];
	
int main(){
	int n;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		hsh[x]++;
	}

	for(int i=1; i<N; i++)
	{
		for(int j=i; j<N; j+=i)
		{
			multiples_ct[i] +=hsh[j];
		}
	}

	int q;
	cin>>q;
	while(q--)
	{
		int x,y;
		cin>>x>>y;

		long long lcm = ((x*1LL*y)/__gcd(x,y));

		long ans = multiples_ct[x]+multiples_ct[y];

		if(lcm<n) ans -= multiples_ct[lcm];

		cout<<ans<<endl;

	}
}