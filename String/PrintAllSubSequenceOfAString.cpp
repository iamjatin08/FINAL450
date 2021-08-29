#include<bits/stdc++.h>
using namespace std;

void printSubSeq(string s, string output){
	if(s.size()==0){ 
		cout<<output<<endl;
		return;
	}
	printSubSeq(s.substr(1),output+s[0]);
	printSubSeq(s.substr(1),output);
}





int main(int argc, char const *argv[])
{
	string s;
	cout<<"ENTER STRING : ";
	cin>>s;
	string output = "";
	printSubSeq(s,output);
	return 0;
}