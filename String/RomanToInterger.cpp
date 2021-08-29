#include<bits/stdc++.h>
using namespace std;
int RomanToInterger(string s){

	unordered_map<char,int> mp;
	mp['I'] = 1;
	mp['V'] = 5;
	mp['X'] = 10;	
	mp['L'] = 50;
	mp['C'] = 100;
	mp['D'] = 500;
	mp['M'] = 1000;
	int l=0;
        bool b = false;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i+1]] && i<s.size()-1){
                b = true;
            }
            else{
                if(b){
                    l+=mp[s[i]]-mp[s[i-1]];
                    b = false;
                }
                else{
                    l+=mp[s[i]];
                }
            }
        }
        return l;
}

int main(int argc, char const *argv[])
{
	string s;
	// cout<<"ENTER STRING : ";
	// cin>>s;
	s = "L";
	cout<<"NUMBER IS "<<RomanToInterger(s)<<endl;
	return 0;
}