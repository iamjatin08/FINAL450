#include<bits/stdc++.h>
using namespace std;

int expandAroundCenter(string s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < s.length() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}
string longestPalin (string s) {

	if ( s.size() < 1) return "";
	
	int start = 0, end = 0;
	
	for (int i = 0; i < s.size(); i++) {
    	int len1 = expandAroundCenter(s, i, i);
    	int len2 = expandAroundCenter(s, i, i + 1);
    	int len =  max(len1, len2);
    	if (len > end - start) {
        	start = i - (len - 1) / 2;
        	end = i + len / 2;
    	}
	}
	
	return s.substr(start, end + 1);
}

string LongestPalindrome(string s){
	int n = s.size();
	int **dp = new int*[n];
	for(int i = 0 ; i<n ; i++) dp[i] = new int[n];
	string ans ;

	for(int g = 0 ; g<n ; g++){
		for(int i = 0 , j = g ; j<n ; i++,j++){
			if(g==0) dp[i][j] = true;
			else if(g==1){
				if(s[i]==s[j]) dp[i][j] = true;
			}
			else {
				if(s[i]==s[j] and dp[i+1][j-1]==true){
					dp[i][j] = true;
				}else dp[i][j] = false;
			}
			if(dp[i][j] and ans.size() < (j-i)) ans = s.substr(i,j-i);
		}
	}
	for(int i = 0 ; i<n ; i++) delete  [] dp[i];
		delete [] dp;
 	return ans;

}






int main(int argc, char const *argv[])
{
	string s;
	cout<<"ENTER STRING : ";
	cin>>s;
	cout<<"LONGEST PALINDROME IS "<<LongestPalindrome(s)<<endl;
	return 0;
}