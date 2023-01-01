#include<bits/stdc++.h>
using  namespace std;
const int N = 1e5+9;
int hasArr[26][N];
int prefs[26][N];
int main()
{
	// int t;
	// cin>>t;
	// while(t--)
	// {
	// 	int n,q;
	// 	cin>>n>>q;
	// 	string s;
	// 	cin>>s;
	// 	while(q--)
	// 	{
	// 		int l,r;
	// 		cin>>l>>r;
	// 	int arr[26];
	// 	for(int i=0; i<26; i++)
	// 	{
	// 		arr[i] = 0;
	// 	}
	// 		l--,r--;
	// 		for(int i=l; i<=r; i++)
	// 		{
	// 			arr[s[i]-'a']++;
	// 		}
			
	// 		int count = 0;

	// 		for(int i=0; i<26; i++)
	// 		{
	// 			if(arr[i]%2!=0)
	// 			{
	// 				count++;
	// 			}
	// 		}

	// 		if(count>1)
	// 		{
	// 			cout<<"NO"<<endl;
	// 		}
	// 		else
	// 		{
	// 			cout<<"YES"<<endl;
	// 		}
	// 	}
	// }	

	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		for(int i=0; i<26; i++)
		{
			for(int j=0; j<N; j++)
				hasArr[i][j] = 0;
		}

		for(int i=0; i<n; i++)
		{
			hasArr[s[i]-'a'][i+1]++;
		}

		//  prefs[0][0] = 0;

		// for(int i=0; i<26; i++)
		// {
		// 	for(int j=1; j<=N; j++)
		// 	{
		// 		prefs[i][j] = 0;
		// 	}
		// }

		// for(int i=0; i<26; i++)
		// {
		// 	for(int j=1; j<=N; j++)
		// 	{
		// 		prefs[i][j] = prefs[i][j-1] + hasArr[i][j];
		// 	}
		// }

		for(int i=0; i<26; i++)
		{
			for(int j=1; j<=N; j++)
			{
				hasArr[i][j] = hasArr[i][j-1] + hasArr[i][j];
			}
		}

		while(q--)
		{
			int l,r;
			cin>>l>>r;
			int charcount = 0;
			for(int i=0; i<26; i++)
			{
				int count = hasArr[i][r] - hasArr[i][l-1];
				if(count%2!=0)charcount++;
			}

			(charcount>1)?cout<<"NO"<<endl:cout<<"YES"<<endl;
		}
	}	
}