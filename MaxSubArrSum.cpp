#include<bits/stdc++.h>
using namespace std;


long maximumSumSubarray(int K, vector<int> &Arr , int N){
  // code here 
	long maxSum = INT_MIN;
 	vector<long> prefixSum(N+10);
 	prefixSum[0] = 0;
 	for(int i=1; i<=N; i++)
 		prefixSum[i] = Arr[i-1] + prefixSum[i-1];

 	for(int i=1; i<N; i++)
 	{
 		if(i+K-1>N)
 		{
 			break;
 		}
 		long curSum = prefixSum[i+K-1]-prefixSum[i-1];
 		maxSum = max(maxSum,curSum);
 	}

 	return maxSum;
}

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> Arr(n);

	for(int i=0; i<n; i++)
		cin>>Arr[i];

	cout<<maximumSumSubarray(k,Arr,n);
}