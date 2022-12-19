#include<bits/stdc++.h>
using namespace std;

void selectionSort(int n,int arr[])
{
	for(int i=0; i<n; i++)
	{
		int minIndex = i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex = j;
			}	
		}
		swap(arr[i],arr[minIndex]);
	}
}
int main()
{
	int n;
	cin>>n; 
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];


	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	selectionSort(n,arr);
	cout<<endl;
	cout<<"selection Sort : "<<endl;

	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}