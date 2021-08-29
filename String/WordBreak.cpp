#include<bits/stdc++.h>
using namespace std;


// bool contain(vector<string> words , string temp){
// 	for(int i = 0 ; i<words.size() ; i++){
// 		if(temp == words[i]){
// 			return true;
// 		}
// 	}
// 	return false;
// }


bool WordBreak(vector<string> words , string s){
	if(words.size()==0) return false;

	int *dp = new int[s.size()];
	for(int i = 0 ; i<s.size() ; i++){
		dp[i] = 0;
	}
	unordered_set<string> st;
	for(int i = 0 ; i<words.size() ; i++) st.insert(words[i]);
	for(int i = 0 ; i<s.size(); i++){

		for(int j = 0 ; j<=i ; j++){
			string temp = s.substr(j,i - j +1);
			if(st.find(temp)!=st.end()){
				if(j>0){
					dp[i] += dp[j-1];
				}
				else{
					dp[i] +=1;
				}
			}
		}
	}

	bool ans = dp[s.size()-1]>0;
	delete   [] dp;
	return ans;
}


int main(int argc, char const *argv[])
{
	vector<string> words;
	int n;
	cout<<"NUMBER OF WORDS PRESENT IN DICTIONARY : ";
	cin>>n;
	cout<<"WORDS : ";
	for(int i = 0 ; i<n ; i++){
		string s;
		cin>>s;
		words.push_back(s);
	}
	string s;
	cout<<"STRING : ";
	cin>>s;
	if(WordBreak(words,s)){
		cout<<"PRESENT"<<endl;
	}
	else cout<<"NOT PRESENT"<<endl;
	return 0;
}