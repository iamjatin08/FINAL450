#include<bits/stdc++.h>
using namespace std;






int main(int argc, char const *argv[])
{
	int n;
	cout<<"N : ";
	cin>>n;
	vector<int> prices;
	cout<<"PRICES : ";
	for(int i = 0 ; i<n ; i++)
	{
		int t;
		cin>>t;
		prices.push_back(t);
	}

	cout<<endl;
	cout<<"MAX PROFIT : "<<Profit(prices)<<endl;
	return 0;
}