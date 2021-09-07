#include <bits/stdc++.h>
using namespace std;


int CountSumZero(vector<int> arr){
	int count = 0 ;

	unordered_map<int,int> mp;

	int sum = 0;
	mp[0] = 1;
	int i = 0;
	while(i < arr.size()-1){
		sum+=arr[i];

		count+=mp[sum];
		mp[sum]++;

		i++;
	}	


	return  count ;
}



int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE : ";
	cin>>n;
	vector<int> v;
	for(int i = 0 ; i<n ; i++){
		int t;
		cin>>t;
		v.push_back(t);
	}
	cout<<"ANSWER : "<<CountSumZero(v)<<endl;
	return 0;
}