#include<bits/stdc++.h>
using namespace std;


bool areIsomorphic(string s, string t){ 

	if(s.size()!=t.size())
		return false;

	unordered_map<char,char> map1;
	unordered_map<char,bool> map2;

	for(int i = 0 ; i<s.size() ; i++){
		char ch1 = s[i] , ch2 = t[i];

		if(map1.find(ch1)!=map1.end()){
			if(map1[ch1]!=ch2) return false;
		}else if(map2[ch2]==true){
			return false;
		}	
		else{
			map1[ch1] = ch2;
			map2[ch2] = true;
		}
	}	
	return true;
    
}
 




int main(int argc, char const *argv[])
{
	string s,t;
	cout<<"STRING S and T : ";
	cin>>s>>t;
	cout<<"ANSWER : "<<areIsomorphic(s,t)<<endl;
	return 0;
}       
