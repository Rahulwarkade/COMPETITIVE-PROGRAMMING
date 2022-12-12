#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> days(n,0);

	    for(int j=0; j<n; j++){	
			int m;
			cin>>m;
			int mask = 0;
			for(int i=0; i<m; ++i)
			{
				int x;
				cin>>x;
				mask = (mask|(1<<x));
			}
			days[j] = mask;
		}

		int maxComnD = 0;
		int person1 = -1;
		int person2 = -1;
		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				int intersection = days[i]&days[j];
				int ComnD = __builtin_popcount(intersection);
				if(ComnD>maxComnD)
				{
					maxComnD = ComnD;
					person1 = i;
					person2 = j;
				}
			}
		}

		cout<<maxComnD<<" "<<person1<<" "<<person2<<endl;

}