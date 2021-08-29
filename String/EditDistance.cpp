#include<bits/stdc++.h>
using namespace std;

int editDistance(string s, string t) {
    // Code here
    if(s.size()==0) return t.size(); // insert elements
    if(t.size() ==0 ) return s.size(); // delete elemets
    if(s.size()== 0 and t.size() ==0 ) return 0;
    if(s[0] == t[0]) return editDistance(s.substr(1),t.substr(1));
    else{
        int opt1 = editDistance(s.substr(1),t); // insert
        int opt2 = editDistance(s,t.substr(1)); // delete 
        int opt3 = editDistance(s.substr(1),t.substr(1)); // replace
        
        return 1 + min(opt1,min(opt2,opt3));
        
    }
}

int editDistance_better(string s, string t,int **dp){
	if(s.size()==0 or t.size()==0) return max(s.size(),t.size());
	int m = s.size() , n = t.size();
	if(dp[m][n]!=(-1)) return dp[m][n];
	if(s[0]==t[0]){
		int ans = editDistance_better(s.substr(1),t.substr(1),dp);
		dp[m-1][n-1] = ans;
		return ans;
	}
	
		dp[m-1][n] = editDistance_better(s.substr(1),t,dp);
		dp[m][n-1] = editDistance_better(s,t.substr(1),dp);
		dp[m-1][n-1] = editDistance_better(s.substr(1),t.substr(1),dp);
		dp[m][n] = 1 + min(dp[m-1][n],min(dp[m][n-1],dp[m-1][n-1]));
		return dp[m][n];
	
}

int editDistanceIt(string s, string t){
	int m = s.size() , n = t.size();
	int **dp = new int*[m+1];
	for(int i = 0 ; i<=m ; i++)
		dp[i] = new int[n+1];
	for(int i = 0 ; i<=m ; i++){
		dp[i][0] = i;
	}
	for(int i = 0; i<=n ; i++){
		dp[0][i] = i;
	}
	for(int i = 1 ; i<=m ; i++){
		for(int j = 1 ; j<=n ; j++){
			if(s[m-i]==t[n-j]){
				dp[i][j] = dp[i-1][j-1];
			}
			else{
				dp[i][j] = 1 + min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
			}
		}
	}
	int ans = dp[m][n];
	for(int i = 0; i<=m ; i++)
		delete [] dp[i];
	delete [] dp;
	return ans;
}
 
int main(int argc, char const *argv[])
{
	string s = "horse",t="ros";
	// cin>>s>>t;
	int m = s.size() , n = t.size();
	int **dp = new int*[m+1];
	for(int i = 0 ; i<=m ; i++){
		dp[i] = new int[n+1];
		for(int j = 0 ; j<=n ; j++){
			dp[i][j] = -1;
		}
	}
	
	cout<<"ANSWER : "<<editDistance_better(s,t,dp)<<endl;
	cout<<"ANSWER : "<<editDistanceIt(s,t)<<endl;
	cout<<"ANSWER : "<<editDistance(s,t)<<endl;

	for(int i = 0 ; i<=m ; i++) delete [] dp[i];
		delete [] dp;

	
	return 0;
}