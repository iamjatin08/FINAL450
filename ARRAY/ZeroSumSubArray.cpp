#include<bits/stdc++.h>
using namespace std;

bool ZeroSumSubarray(vector<int> arr){
	int n = arr.size();
	int sum = 0 ;
	unordered_set<int> ans;
	for(int i = 0 ; i< n; i++){
		sum +=arr[i];
		if(sum == 0 or ans.find(sum)!=ans.end()) 
			return true;
		ans.insert(sum);
	}
	return false;
}


int main(int argc, char const *argv[])
{
	int n;
	cout<<"N : ";
	cin>>n;
	std::vector<int> v;
	cout<<"ELEMENTS : ";
	for(int i  = 0 ; i<n ; i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}

	if(ZeroSumSubarray(v)){
		cout<<"EXITS"<<endl;
	}
	else
		cout<<"NOT EXITS "<<endl;
	return 0;
}