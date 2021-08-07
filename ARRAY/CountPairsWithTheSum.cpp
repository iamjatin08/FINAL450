#include<bits/stdc++.h>
using namespace std;

int CountPairsWithGivenSum(vector<int> input, int target){

	unordered_map<int,int> mp;
	for(int i = 0 ; i<input.size() ; i++)
		mp[input[i]]++;

	int count = 0 ;
	for(int i = 0 ; i<input.size() ; i++){
		count+=mp[target-input[i]];
		if(target-input[i]==input[i]) count--;
	}

	return count;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE : ";
	cin>>n;

	vector<int> input;
	cout<<"ENTER ELEMENTS : ";

	for(int i = 0 ; i<n ; i++)
	{
		int t;
		cin>>t;
		input.push_back(t);
	}
	int k;
	cout<<"TARGET : ";
	cin>>k;


	cout<<endl;
	cout<<"NUMBER OF PAIRS IS "<<CountPairsWithGivenSum(input,k)<<endl;
	return 0;
}
