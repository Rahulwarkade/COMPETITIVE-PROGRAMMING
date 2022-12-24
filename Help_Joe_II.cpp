#include<bits/stdc++.h>
using namespace std;

int main()
{

// Brute force code
	// int n,m,q;
	// cin>>n>>m;
	// int arr[n];

	// for(int i=0; i<n; ++i)
	// 	cin>>arr[i];

	// cin>>q;

	// while(q--)
	// {
	// 	int x;
	// 	cin>>x;
	// 	int Max = INT_MIN;

	// 	for(int i=0; i<n; i++)
	// 	{
	// 		if((x+arr[n-1])<m)
	// 		{
	// 			Max = x+arr[n-1];
	// 			break;
	// 		}
	// 		Max = max(Max,((arr[i]+x)%m));
	// 	}
	// 	cout<<Max<<endl;
	// }


// optimized code
	int n,m,q;
	cin>>n>>m;
	long long arr[n];

	for(int i=0; i<n; ++i){
		cin>>arr[i];
		arr[i] %= m;
	}

	sort(arr,arr+n);
	cin>>q;

	while(q--)
	{
		long long x;
		cin>>x;
		x %= m;
		long long Max = INT_MIN;

		long long *ptr = upper_bound(arr,arr+n,m-x-1);

		if(ptr!=arr)
			ptr--;

		cout<<max((arr[n-1]+x)%m,(*ptr+x)%m)<<endl;
		
	}
}