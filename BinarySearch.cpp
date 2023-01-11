#include<bits/stdc++.h>
using namespace std;

int binarySearch(int el, vector<int> &vac)
{
	int left = 0,right = vac.size()-1;

	while(left<right)
	{
	    int mid = (left+right)/2;

		if(vac[mid]==el)
			return mid;
		else if(vac[mid]<el)
			left = mid+1;
		else 
			right = mid-1;
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> vac(n);

	for(int i=0; i<n; i++)
		cin>>vac[i];
	int el;
	cin>>el;
	cout<<binarySearch(el,vac)<<endl;
}
