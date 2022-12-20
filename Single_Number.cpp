#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int siz = nums.size();
        unordered_map<int,int> mp;
        int key;
        for(int i=0; i<siz; i++)
        {
            int el = nums[i];
            mp[el]++;
        }
        
        for(auto it = mp.begin(); it!=mp.end(); it++)
        {
             key = it->first;
            if(mp[key]==1)
                break;
        }
        return key;
    }

int main()
{
	int n;
	cin>>n;
	vector<int> nums(n);

	for(int i=0; i<n; i++)
	{
		cin>>nums[i];
	}

	cout<<singleNumber(nums)<<endl;
}