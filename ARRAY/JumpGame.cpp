#include<bits/stdc++.h>
using namespace std;


bool JumpGame(vector<int>& input){
	if(input[0]==0) return false;

	int n = input.size();

	int maxReachable = 0;
	for(int i = 0 ; i<n ; i++){
		if(maxReachable<i)
			return false;
		maxReachable = max(maxReachable,i+input[i]);
	}
	return true
}





int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE OF ARRAY : ";
	cin>>n;
	vector<int> input;
	cout<<"ENTER ELEMENTS : ";
	for(int i = 0 ; i<n ; i++){
		int t;
		cin>>t;
		input.push_back(t);
	}

	if(JumpGame(input))
		cout<<"REACHEABLE"<<endl;
	else
		cout<<"NOT REACHEABLE"<<endl;
	return 0;
}