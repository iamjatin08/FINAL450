#include<bits/stdc++.h>
using namespace std;


int LongestRepeatingSubsequence(string s){
	int n = s.size();
	int **dp = new int*[n+1];
	for(int i = 0 ; i<n+1; i++){
		dp[i] = new int[n+1];
		for(int j = 0 ; j<n+1 ; j++)
			dp[i][j] = 0;
	}

	for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            // if character matches and having diff index
            if (s[i-1] == s[j-1] && i != j)
                dp[i][j] =  1 + dp[i-1][j-1];         
                      
            // If characters do not match
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[n][n];
}








int main(int argc, char const *argv[])
{
	string s ;
	cout<<"ENTER STRING : ";
	cin>>s; 
	cout<<"Longest Repeating Subsequence : "<<LongestRepeatingSubsequence(s)<<endl; 
	return 0;
}