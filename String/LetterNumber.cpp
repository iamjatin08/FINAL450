#include<bits/stdc++.h>
using namespace std;

string input[] = {" ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

vector<string> letterCombinations(string number){
	if(number.size()==0){
		vector<string> ans = {""};
		return ans;
	}
	char ch = number[0];
	int index =  ch - '0'-1;
	string key = input[index];
	vector<string> output = letterCombinations(number.substr(1));
	vector<string> ans;
	for(int i = 0 ; i<key.size() ; i++){
		char ch = key[i];
		if(output.size()>0){
		for(int j = 0 ; j<output.size() ; j++){
			string s = output[j];
			ans.push_back(ch + s);
		}
	}
	else{
		ans.push_back("" + ch);
	}
	}
	
	return ans;


}



int main(int argc, char const *argv[])
{
	string number;
	cout<<"NUMBER : ";
	cin>>number;
	// number = "233";
	vector<string> ans = letterCombinations(number);
	
	for(string s : ans)
		cout<<s<<endl;
	


	return 0;
}