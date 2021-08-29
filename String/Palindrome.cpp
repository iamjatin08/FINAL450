#include<bits/stdc++.h>
using namespace std;



bool isPalindrome(string s){
	for(int i = 0 , j = s.size() ; i<j ; i++,j--){
		if(s[i]!=s[j]) return false;
	}
	return true;
}




int main(int argc, char const *argv[])
{
	string s;
	cout<<"ENTER STRING : ";
	cin>>s;
	if(isPalindrome(s)){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
	return 0;
}