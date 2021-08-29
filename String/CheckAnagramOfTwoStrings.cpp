#include<bits/stdc++.h>
using namespace std;


bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>  mp1 ,mp2;
       for(int i = 0 ; i<s.size() ; i++){
           mp1[s[i]]++;
           mp2[t[i]]++;
       }
        for(int i =  0; i<t.size() ; i++){
            if(mp1[t[i]]!=mp2[t[i]]) return false;
        }
        return true;
    }

bool check(string s1, string s2){
	if(s1.size()>s2.size()) return false;
	int i = 0 , j = s1.size()-1;
	for(;j<s2.size();i++,j++){
		if(isAnagram(s1,s2.substr(i,j-i+1))) return true;
	}
	return false;
}



int main(int argc, char const *argv[])
{
	string s1;
	string s2; 
	cout<<"ENTER S1 : ";
	cin>>s1;
	cout<<"ENTER S2 : ";
	cin>>s2;
	if(check(s1,s2)) {
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}