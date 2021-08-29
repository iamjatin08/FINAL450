#include<bits/stdc++.h>
using namespace std;

char flip(char ch){
	return (ch=='0')?'1':'0';
}

int MinFlip(string s, char ch){
	int ans = 0;
	for(int i = 0 ; i<s.size() ; i++){
		if(ch!=s[i]) ans++;
		ch = flip(ch);
	}
	return ans;
}


int MinNumFlip(string  s){
	return min(MinFlip(s,'0'),MinFlip(s,'1'));
}





int main(int argc, char const *argv[])
{
	string s;
	// cout<<"ENTER STRING : ";
	// cin>>s;
	s = "0001010111";
	cout<<"NUMBER OF FLIPS : "<<MinNumFlip(s)<<endl;
	return 0;
}