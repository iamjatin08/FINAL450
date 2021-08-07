#include<bits/stdc++.h>
using namespace std;




long long tiles(int n, int m){

	long long  * dp= new long long [n+1];
	for(int i = 0 ;  i<= n; i++){
		if(i<m) dp[i] = 1;
		else if(i==m) dp[i]= 2;
		else dp[i] = dp[i-1] + dp[i-m]; 
	}
	long long ans = dp[n];
	delete [] dp;
	return ans;
}





int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	cout<<"ANSWER IS "<<tiles(n,m);
	return 0;
}