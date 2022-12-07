#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int  arr[N];

int main()
{// BRUTE FORCE APPROACH

	int n,m;
	cin>>n>>m;

	while(m--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		for(int i = a; i<=b; i++)
		{
			arr[i] += c;
		}

	}
		int max = INT_MIN;
		for(int i=1; i<n; i++)
		{
			if(arr[i]>max)
				max = arr[i];
		}

		cout<<max<<endl;

// OPTIMIZED APPROACH USING PRECOMPUTATION AND HASHING

	int n,m;
	cin>>n>>m;

	while(m--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		arr[a] += c;
		arr[b+1] -= c;
	}

	for(int i=1; i<=n; i++)
	{
		arr[i] += arr[i-1];
	}

	long long int max = INT_MIN;
	for(int i=1; i<n; i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}

		cout<<max<<endl;
}

// O(m*n) = 10^12
// after optimizetion
// O(m+n) = 2*10^5 + 10^7 ~ 10^7 || O(n)
