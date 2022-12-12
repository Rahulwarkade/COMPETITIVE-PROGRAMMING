#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int BinExpoRec(int a,int b)
{
	if(b==0) return 1;
	int ans = BinExpoRec(a,b/2);
	if(b&1)
		return (a*((ans* 1LL *ans)%M))%M;
	else
		return (ans*1LL*ans)%M;

}

int BinExpoItrat(int a,int b,int m)
{
	int ans = 1;
	while(b>0)
	{
		if(b&1!=0)
			ans= (ans*1LL*a)%m;
		a= (a*1LL*a)%m;
		b>>=1;
	}

	return ans;
}


// int BinExpoItrat(int a,int b)
// {
// 	int ans = 1;
// 	while(b>0)
// 	{
// 		if(b&1!=0)
// 			ans= BinMultiply(ans,a);
// 		a= BinMultiply(a,a);
// 		b>>=1;
// 	}

// 	return ans;
// }

int BinMultiply(int a,int b)
{
	int ans = 1;
	while(b>0)
	{
		if(b&1!=0)
			ans= (ans+a)%M;
		a= (a+a)%M;
		b>>=1;
	}

	return ans;
}
int main()
{
	// cout<<pow(2,3)<<endl;

	// double d = 1e24;
	// cout<<setprecision(24)<<pow(10,24)<<endl;

	// cout<<setprecision(30)<<d<<endl;

	int a,b;
	cin>>a>>b;
	// cout<<pow(3,13)<<endl;
	// cout<<BinExpoRec(a,b)<<endl;
	cout<<BinExpoItrat(a,b)<<endl;

	cout<<BinExpoItrat(50,BinExpoItrat(64,32,M-1),M)
}  