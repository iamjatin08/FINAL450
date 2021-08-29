#include<bits/stdc++.h>
using namespace std;

bool Rearrange(string s){
	int n = s.size()/2;
	unordered_map<char,int> mp;
	for(char ch : s){
		mp[ch]++;
	}
	for(auto it = mp.begin() ; it!=mp.end() ; it++){
		if(it->second > n) return false;
	}
	return true;
}



int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<Rearrange(s)<<endl;
	}
	return 0;
}