// Question -1 :
// https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/

#include<iostream>
using namespace std;

class solution
{
public:
	int minDifference(int arr[], int n)
	{
		return 0;
	}
	
};



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int a[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];

		solution ob;
		cout<<ob.minDifference(a,n)<<endl;		
	}
	/* code */
	return 0;
}