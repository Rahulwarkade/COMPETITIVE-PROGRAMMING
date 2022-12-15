#include<bits/stdc++.h>
using namespace std;

int main()
{
	// int a=24,b=7;

	// cout<<a<<" "<<b<<endl;
	// a = a^b;
	// b = b^a;
	// a = a^b;

	// cout<<a<<" "<<b<<endl;

	int n;
	cin>>n;

	int oddCountel = 0;
	int el; 
	while(n--)
	{
		cin>>el;
		oddCountel = oddCountel^el;
	}

	cout<<oddCountel<<endl;
}