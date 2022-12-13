#include<bits/stdc++.h>
using namespace std;

// void had(int x)
// {
// 	if(x>=0)
// 	{
// 		had(--x);
// 		cout<<x;
// 		had(--x);
// 	}
// }

vector<vector<int>> vecofSub;
void SubSet(vector<int> &Set, int i, vector<int> &nums)
{
	if(i == nums.size())
	{
		vecofSub.push_back(Set);
		return;
	}
	SubSet(Set,i+1,nums);
	Set.push_back(nums[i]);
	SubSet(Set,i+1,nums);
	Set.pop_back();
}


int main()
{
	int n; 
	cin>>n;

	// had(n);
	vector<int> nums(n);

	for(int i=0; i<n; i++)
		cin>>nums[i];
	
	vector<int> empty;
	SubSet(empty,0,nums);

	for(auto val : vecofSub)
	{
		for(auto value : val)
		{
			cout<<value<<" ";
		}
		cout<<endl;
	}
	
}
