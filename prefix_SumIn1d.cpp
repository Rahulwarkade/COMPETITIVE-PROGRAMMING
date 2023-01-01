#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int arr[N];
int pfs[N];
int main()
{// BRUTE FORCE APPROACH

	// int n; 
	// cin>>n;
	// for(int i=1; i<=n; i++)
	// {
	// 	cin>>arr[i];
	// }

	// int q;
	// cin>>q;

	// while(q--)
	// {
	// 	int l,r;
	// 	cin>>l>>r;
	// 	long long sum = 0;
	// 	for(int i=l; i<=r; i++)
	// 	{
	// 		sum += arr[i];
	// 	}
	// 	cout<<sum<<endl;
	// 

//  OPTIMIZED APPROACH

	int n; 
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>arr[i];
		pfs[i] = pfs[i-1] + arr[i];
	}

	int q;
	cin>>q;

	while(q--)
	{
		int l,r;
		cin>>l>>r;
	 	cout<<pfs[r]-pfs[l-1]<<endl;
	}

}