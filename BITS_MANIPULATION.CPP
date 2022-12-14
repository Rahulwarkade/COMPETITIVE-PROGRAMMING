#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
	for(int i=10; i>=0; i--)
	{
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

void checkIthBit(int num,int i)
{
	if((num&(1<<i))!=0)
		cout<<"set bit"<<endl;
	else
		cout<<"unset bit"<<endl;
}

void setIthBit(int num,int i)
{
	num = num | 1<<i;

	printBinary(num);
}

void unsetIthBit(int num,int i)
{
	num = num & ~(1<<i);

	printBinary(num);
}

void toggleIthBit(int num,int i)
{
	num = (num^(1<<i));
	printBinary(num);
}

void countSetBit(int num)
{
	int count = 0;
	for(int i=31; i>=0; i--)
	{
		if(((num>>i)&1)!=0)
			count++;
	}

	cout<<count<<endl;
}
int main()
{
	int num;
	cin>>num;

	printBinary(num);

// check ith bit
	checkIthBit(num,1);

// set ith bit
	setIthBit(num,1);

// unset ith bit
	unsetIthBit(num,1);

// toggle ith bit 
	toggleIthBit(num,3);

// count set bit
	countSetBit(num);

// builtin count
	cout<<__builtin_popcount(num)<<endl;

	cout<<__builtin_popcountll((1ll<<35)-1)<<endl;


}
