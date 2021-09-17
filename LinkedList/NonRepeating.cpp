#include<bits/stdc++.h>
using namespace std;


string NonRepeating(string s){
	vector<int> vis(26,0);
	vector<char> v;
	string ans = "";
	int n  = s.size();
	for(int i = 0 ; i<n ; i++){
		if(!vis[s[i]-'a']){
			v.push_back(s[i]);
		}
		vis[s[i]-'a']++;
		int f = 0;
		int m = v.size();
		for(int j = 0 ; j<m ; j++){
			if(vis[v[j] - 'a'] == 1){
				ans.push_back(v[j]);
				f = 1;
				break;
			}
		}
		if(f == 0)
			ans.push_back('#');
	}
	return ans;

}


int main(int argc, char const *argv[])
{
	cout<<"STRING : ";
	string s ; 
	cin>>s;
	cout<<"ANSWER : ";
	cout<<NonRepeating(s)<<endl;
	return 0;
}