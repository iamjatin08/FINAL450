#include<bits/stdc++.h>
using namespace std;

void Reverse(string &s){
	
	for(int i = 0 , j = s.size()-1 ;i<j; i++,j--) swap(s[i],s[j]);
	return;
}



int main(int argc, char const *argv[])
{
	string s;
	cout<<"ENTER STRING : ";
	cin>>s;
	Reverse(s);
	cout<<"REVERSE : ";
	cout<<s<<endl;
	return 0;
}