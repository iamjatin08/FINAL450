#include<bits/stdc++.h>
using namespace std;


int StickerTheif(vector<int> v){
	int n = v.size();
	int * dp = new int[n];
	
	dp[0] = v[0];
	dp[1] = max(dp[0],v[1]);
	for(int i = 2; i<n ; i++){
		dp[i] = max(dp[i-1],v[i] + dp[i-2]);
	}
	int ans = dp[n-1];
	delete [] dp;
	return ans;
}




int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE : ";
	cin>>n;
	vector<int> v;
	cout<<"ENTER DATA : ";
	for(int i = 0; i<n ; i++){
		int t;
		cin>>t;
		v.push_back(t);
	}	
	cout<<"ANSWER : "<<StickerTheif(v)<<endl;
	return 0;
}