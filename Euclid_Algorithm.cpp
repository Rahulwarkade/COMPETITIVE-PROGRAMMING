#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
	if(b==0)return a;
	gcd(b,a%b);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(4,12)<<endl;
	cout<<gcd(12,18)<<endl;
	cout<<gcd(18,12)<<endl;

	//inbuilt __gcd(18,12)
	// gcd(gcd(a,b),c)

	cout<<__gcd(a,b)<<endl;

	cout<<a*b/gcd(a,b)<<endl;

	//minimum fraction
	cout<<(a/__gcd(a,b))<<endl;
	cout<<"---"<<endl;
	cout<<(b/__gcd(a,b))<<endl;
}