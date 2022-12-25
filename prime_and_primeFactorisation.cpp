#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	bool flag = true;
	vector<int> prim;
	for(int i=2; i*i<=n; i++)
	{
		// if(n%i==0){
		// 	flag = false;
		// 	break;
		// }
		while(n%i==0)
		{
			prim.push_back(i);
			n/=i;
		}
	}

	if(n>1)
		prim.push_back(n);
	
	for(int el : prim){
		cout<<el<<endl;
	}

	// (flag)?cout<<"prime":cout<<"not prime";
	// cout<<endl;
}