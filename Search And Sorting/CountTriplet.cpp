#include<bits/stdc++.h>
using namespace std;


long long countTriplets(long long arr[], int n, long long sum)
{
   sort(arr,arr+n);
   long long ans = 0;

   for (int i = 0; i < n - 2; i++)
	{
		int j = i + 1, k = n - 1;
		while (j < k)
		{
			if (arr[i] + arr[j] + arr[k] >= sum)
				k--;
			else
			{
				ans += (k - j);
				j++;
			}
		}
	}
	return ans;
}
	


int main(int argc, char const *argv[])
{
	long long arr[] = {-2,0,1,3};
	int n = sizeof arr / sizeof arr[0];
	long long sum = 2;
	cout << countTriplets(arr, n, sum) << endl;
	return 0;
}