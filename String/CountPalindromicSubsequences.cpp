#include <bits/stdc++.h>
using namespace std;


long long int CountPalindromicSubsequence(string s) {
	if(s.size()==0) return 0;
	if(s.size()==1) return 1;

	long long int**dp = new long long int*[s.size()];
	for(int i = 0 ; i<s.size() ; i++){
		dp[i] = new long long int[s.size()];
	}

	for(int g = 0 ; g<s.size() ; g++){
		for(int i = 0 , j = g;  j<s.size() ; i++,j++){
			if(g==0){
				dp[i][j] = 1;
			}
			else if(g == 1){
				if(s[i]==s[j]) dp[i][j] = 3;
				else dp[i][j] = 2;
			}
			else{
				if(s[i]==s[j]){
					dp[i][j] = dp[i][j-1] + dp[i+1][j] + 1;
				}
				else{
					dp[i][j] = dp[i][j-1]+ dp[i+1][j] - dp[i+1][j-1];
				}
				dp[i][j] = dp[i][j] < 0 ? dp[i][j] + 1000000007 : dp[i][j] % 1000000007;
			}
		}
	}
	long long int ans = dp[0][s.size()-1];
	for(int i = 0 ; i<s.size() ; i++)
		delete [] dp[i];
	delete [] dp;
	return ans;
}


int main(int argc, char const *argv[])
{
	string s;
	cout<<"STRING : ";
	cin>>s;
	cout<<"ANSWER : "<<CountPalindromicSubsequence(s)<<endl;
	return 0;
}