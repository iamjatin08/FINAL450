#include<bits/stdc++.h>
using namespace std;


long long Tiles(int size){
	long long* dp = new long long[size+1];
	int n = size;

	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3 ; i<=n ; i++){
		dp[i] = dp[i-1]+dp[i-2];
	}
	long long ans = dp[n];
	delete  [] dp ;
	return ans;
}



int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE OF FLOOR  : ";
	cin>>size;

	cout<<"ANSWER IS "<<Tiles(size)<<endl;
	return 0;
}