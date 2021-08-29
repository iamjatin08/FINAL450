#include<bits/stdc++.h>
using namespace std;

bool match(string p, string s){
  vector<vector<bool>> dp(s.size() + 1, vector<bool>(p.size() + 1, false));
        dp[0][0] = true;
        for (int j = 0; j < p.size() && p[j] == '*'; ++j) {
            dp[0][j + 1] = true;
        }
        
        for (int i = 1; i <= s.size(); ++i) {
            for (int j = 1; j <= p.size(); ++j) {
                if (p[j - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else {
                    dp[i][j] = (s[i - 1] == p[j - 1] || p[j - 1] == '?') && dp[i - 1][j - 1];
                }
            }
        }

        return dp[s.size()][p.size()];
}




int main(int argc, char const *argv[])
{
	cout<<"WILD STRING : ";
	string wild , pattern ;
	cin>>wild;
	cout<<"PATTERN : ";
	cin>>pattern;
	match(wild,pattern) == true ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}