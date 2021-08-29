#include<bits/stdc++.h>
using namespace std;

string Remove(string s,char prev = '*'){
	if(s.size() ==0 ){
		return "";
	}
	if(prev == s[0]){
		prev = s[0];
		return Remove(s.substr(1),prev);
	}

	prev = s[0];
	return prev + Remove(s.substr(1),prev);
}




int main(int argc, char const *argv[])
{
	string s;
	cout<<"ENTER STRING : ";
	cin>>s;
	s = Remove(s);
	cout<<s<<endl;
	return 0;
}