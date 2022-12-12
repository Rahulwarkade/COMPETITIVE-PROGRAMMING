#include<bits/stdc++.h>
using namespace std;
const int N = 26;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int hasht1[N];
		int hasht2[N];

		for(int i=0; i<N; i++)
			hasht1[i] = 0;
		for(int j=0; j<N; j++)
			hasht2[j] = 0;

		string strS,strT;
		cin>>strS>>strT;

		int s = strS.size();

		for(int i=0; i<s; i++)
			hasht1[strS[i]-'a']++;

		for(int i=0; i<s; i++)
			hasht2[strT[i]-'a']++;

		int minOperation = 0;

		for(int i=0; i<s; i++)
		{
			

				if(hasht1[strS[i]-'a']==hasht2[strS[i]-'a'])
					{ continue; }

				if(strS[i] != strT[i])
			    {
					hasht2[strS[i]-'a']++;
					hasht2[strT[i]-'a']--;
					minOperation += 2;
					continue;
			    }
			    if(hasht1[strS[i]-'a']>hasht2[strS[i]-'a'])
				{
					hasht2[strS[i]-'a']++;
					minOperation++;
				}
			    else if(hasht1[strS[i]-'a']<hasht2[strS[i]-'a'])
				{
					hasht2[strT[i]-'a']--;
					minOperation++;
				}
		}

		cout<<minOperation<<endl;
	}
}