#include<bits/stdc++.h>
using namespace std;
int main()
{
	// while(true)
	// {
	// 	int x;
	// 	cin>>x;
	// 	if(x==42)
	// 		break;
	// 	cout<<x<<endl;
	// }
	// return 0;

	// Friends Relastionship

	int T;
	cin>>T;

	while(T--)
	{
		int n;
		cin>>n;
		for(int i=1; i<=n; ++i)
		{
			for(int j=1; j<=i; ++j)
				cout<<"*";
		    for(int k=1; k<=(2*n-2*i); ++k)
					cout<<"#";
			for(int l =1; l<=i; ++l)
				cout<<"*";

			cout<<endl;
		}

		cout<<endl;
	}
}