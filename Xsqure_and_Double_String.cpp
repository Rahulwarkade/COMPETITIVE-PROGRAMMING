#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int alpha[26];
		for(int i=0; i<26; i++)
			alpha[i] = 0;

		string s;
		cin>>s;

		for(int ch=0; ch<s.size(); ch++)
		{
			alpha[s[ch]-'a']++;
		}
		for(int ch=0; ch<s.size(); ch++)
		{
			if(alpha[s[ch]-'a']>1)
			{
				cout<<"YES"<<endl;
				break;
			}
			if(ch==s.size()-1)
			{
				cout<<"NO"<<endl;
			}
		}
	}
}