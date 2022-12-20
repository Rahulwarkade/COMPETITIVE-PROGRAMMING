#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n; 

	set<pair<int,int>> points;

	vector<pair<int,int>> pointsVec;

	for(int i=0; i<n; i++)
	{
		int x,y;
		cin>>x>>y;
		pointsVec.push_back(make_pair(x,y));

		points.insert({x,y});
	}

	int areaMax = INT_MIN; 
	int areaMin = INT_MAX;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			auto p1 = pointsVec[i];
			auto p2 = pointsVec[j];
		
			if(p1.first==p2.first)continue;
			if(p1.second==p2.second)continue;
			if(p1.first>p2.first)swap(p1,p2);

			int x1 = p1.first, y1= p2.second;
			int x2 = p2.first, y2 = p1.second;

			if(points.count({x1,y1}) && points.count({x2,y2})){
			int area = abs(p1.first - p2.first)*abs(p1.second-p2.second);

			areaMin = min(areaMin,area);
			areaMax = max(areaMax,area);
		   }
		}
	}

	if(areaMax==INT_MIN)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<areaMax-areaMin<<endl;
	}
}