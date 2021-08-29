#include<bits/stdc++.h>
using namespace std;

int LongestPalSubseq(string s){

	int n = s.size();
	int ** dp = new int*[n];
	for(int i = 0 ; i < n ; i++) 
		dp[i] = new int[n];
	for(int g = 0 ; g<n ; g++){
		for(int i = 0 , j = g ; j<n ; i++,j++){
			if(g == 0) dp[i][j] = 1;
			else if(g == 1){
				if(s[i] == s[j]) dp[i][j] = 2;
				else dp[i][j] = 1;
			}
			else{
				if(s[i] == s[j]){
					dp[i][j] = 2 + dp[i+1][j-1];
				}
				else{
					dp[i][j] =  max(dp[i+1][j],dp[i][j-1]);
				}
			}
		}
	}
	int ans = dp[0][n-1];
	for(int i = 0 ; i<n ; i++)
		delete [] dp[i];
	delete [] dp;
	return ans;
}

int minInsertion(string s){
	return s.size() - LongestPalSubseq(s);
}


int main(int argc, char const *argv[])
{
	string s;
	cout<<"ENRER STRING : ";
	cin>>s;
	cout<<minInsertion(s)<<endl;
	return 0;
}