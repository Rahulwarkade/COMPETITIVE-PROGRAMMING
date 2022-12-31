#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

vector<int> lp(N,0),hp(N,0);
vector<bool> isPrime(N,1);
vector<int> divisors[N];
int main()
{
	isPrime[0] = isPrime[1] = false;

	for(int i=2; i<N; i++)
	{
		if(isPrime[i])
		{
			lp[i] = hp[i] = i;
			for(int j=2*i; j<N; j+=i)
			{
				isPrime[j] = false;
				hp[j] = i;
				if(lp[j]==0){
					lp[j] = i;
				}
			}
		}
	}

	for(int i=2; i<N; i++)
	{
		for(int j=i; j<N; j+=i)
		{
			divisors[j].push_back(i);
		}
	}
	for(int i=1; i<10; i++)
	{
		for(int div : divisors[i])
		{
			cout<<div<<" ";
		}
		cout<<endl;
	}
	// O(N (log(log(n))))

	for(int i=1; i<10; i++){
		cout<<isPrime[i]<<endl;
	}

	for(int i=1; i<100; i++)
	{
		cout<<lp[i]<<" "<<hp[i]<<endl;
	}
	int num;
	cin>>num;

	prime factorisiation in O(log(n))

	vector<int> primFact;

	while(num>1)
	{
		int primFactor = hp[num];
		while(num%primFactor==0){
			primFact.push_back(primFactor);
			num/=primFactor;
		}
	}

	for(int el:primFact)
	{
		cout<<el<<endl;
	}

}