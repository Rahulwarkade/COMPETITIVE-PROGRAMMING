#include<bits/stdc++.h>
using namespace std;

vector<string> vailidParan;

void generateParanthesis(string s, int openParan,int closeParan)
{
	if(openParan==0 && closeParan == 0)
	{
		vailidParan.push_back(s);
		return;
	}
	if(openParan>0)
	{
		s.push_back('(');
		generateParanthesis(s,openParan-1,closeParan);
		s.pop_back();
		// s.push_back(')');
	}
	if(closeParan>0 && openParan<closeParan)
	{
		s.push_back(')');
		generateParanthesis(s,openParan,closeParan-1);
		// s.pop_back ();
	}
}

int main()
{
	int n; 
	cin>>n;
	string s;
	generateParanthesis(s,n,n);

	for(auto vp : vailidParan)
		cout<<vp<<endl;


}
