#include<bits/stdc++.h>
using namespace std;



vector<vector<string>> Anagrams(vector<string> input){

	unordered_map<string , vector<string>> mp;

	for(int i = 0 ; i<input.size() ; i++){
		string s = input[i];
		sort(s.begin(),s.end());
		mp[s].push_back(input[i]);
	}

	vector<vector<string>> answer(mp.size());

	int idx = 0;
	for(auto it : mp){
		vector<string> v = it.second;
		for(auto temp : v){
			answer[idx].push_back(temp);
		}
		idx++;
	}
	return answer;


}





int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE : ";
	cin>>n;
	vector<string> input;
	for(int i = 0 ; i<n ; i++){
		string t;
		cin>>t;
		input.push_back(t);
	}
	vector<vector<string>> output = Anagrams(input);

	for(vector<string> t : output){
		for(string s : t)
			cout<<s<<" ";
		cout<<endl;
	}

	return 0;
}