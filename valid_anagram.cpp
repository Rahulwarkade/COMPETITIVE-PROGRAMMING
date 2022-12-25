#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        
        int N = 26;
        int hash1[N];
        int hash2[N];
        for(int i=0; i<N; i++)
            hash1[i] = hash2[i] = 0;
        
        for(int i=0; i<s.size(); ++i)
            hash1[s[i]-'a']++;        
        for(int i=0; i<t.size(); ++i)
            hash2[t[i]-'a']++;
        
        for(int i=0; i<s.size(); ++i)
        {
            if(hash1[s[i]-'a']!=hash2[s[i]-'a'] )
                return false;
            if(s.size()!=t.size())
                return false;
    }
    return true;
}

int main()
{
	string s,t;
	cin>>s>>t;
	cout<<isAnagram(s,t)<<endl;
}