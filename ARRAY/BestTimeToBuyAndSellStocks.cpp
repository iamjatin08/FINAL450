#include<bits/stdc++.h>
using namespace std;



int Profit(vector<int>& prices){

	//least so far
	int lsf = INT_MAX;
	//overall profit
	int op = 0 ;
	//profit if sold today
	int pist = 0;
	for(int i = 0 ; i<prices.size() ; i++){
		if(prices[i]<lsf)
			lsf = prices[i];
		pist = prices[i] - lsf;
		if(pist > op)
			op = pist;
	}
	return op;


}







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