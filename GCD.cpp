#include<bits/stdc++.h>
using namespace std; 

int main()
{// BRUTE FORCE APPROACH 


	// int t;
	// cin>>t;

	// while(t--)
	// {
	// 	int n,q;
	// 	cin>>n>>q;
	// 	int arr[n+1];
	// 	for(int i=1; i<=n; i++)
	// 	{
	// 		cin>>arr[i];
	// 	}
	// 	while(q--)
	// 	{
	// 		int l,r;
	// 		cin>>l>>r;
	// 		int hcf = 0;
	// 		for(int  i=1; i<l; i++)
	// 		{
	// 			hcf = __gcd(hcf,arr[i]);
	// 		}			
	// 		for(int  i=r+1; i<=n; i++)
	// 		{
	// 			hcf = __gcd(hcf,arr[i]);
	// 		}

	// 		cout<<hcf<<endl;
	// 	}
	// }
	

// OPTIMIZED APPROACH


	int t;
	cin>>t;

	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int arr[n+1];
		int forward[n+1];
		int backward[n+1];
		forward[0] = backward[n+1] = 0;

		for(int i=1; i<=n; i++)
		{
			cin>>arr[i];
		}

		for(int i=1; i<=n; i++)
		{
			forward[i] = __gcd(forward[i-1],arr[i]);
		}

		for(int i=n; i>=1; i--)
		{
			backward[i] = __gcd(backward[i+1],arr[i]);
		}

		while(q--)
		{
			int l,r;
			cin>>l>>r;
			cout<<__gcd(forward[l-1],backward[r+1])<<endl;
		}
	}
}