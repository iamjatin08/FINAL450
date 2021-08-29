#include<bits/stdc++.h>
using namespace std;

vector<int> AllAnagramsStrings(string s, string t){
	int hash = 0;
	int temp = 0;
	for(int i = 0 ; i<t.size() ; i++) {
		hash+=t[i];
		temp+=s[i];
	}

	vector<int> answer;
	if(temp == hash) answer.push_back(0);
	for(int i = 1 ,j = t.size(); j<s.size() ; i++ , j++){
		temp = temp - s[i-1] + s[j];
		if(temp == hash){
			answer.push_back(i);	
		}
	}

	return answer;

}

vector<int> findAnagrams(string s, string p) {
	vector<int> goal(26), cur(26), res;
	for(char c : p) goal[c - 'a']++;
	for(int i = 0; i < s.size(); i++) {
		cur[s[i] - 'a']++;
		if(i >= p.size()) cur[s[i - p.size()] - 'a']--;
		if(cur == goal) res.push_back(i - p.size() + 1);
	}
	return res;
}




int main(int argc, char const *argv[])
{

	string s,t;
	cout<<"MAIN STRING : ";
	cin>>s;
	cout<<"STRING : ";
	cin>>t;
	vector<int> p = findAnagrams(s,t);
	cout<<"NUMBER : "<<p.size();
	cout<<endl;
	cout<<"INDEX : ";
	for(int a : p)
		cout<<a<<" ";
	cout<<endl;

	return 0;
}