#include<bits/stdc++.h>
using namespace std;



int SplitStringIn0and1(string str){
	if(str.size()==1) return -1;
	int ans = 0 ;
	stack<char> s;
	for(int i = 0 ;  i<str.size() ; i++){
		if(s.size()==0) s.push(str[i]);
		else if(s.top()==str[i]) s.push(str[i]);
		else{
			s.pop();
			if(s.size()==0) ans++;
		}
	}
	if(ans>0) return ans;
	else return -1;
}




int main(int argc, char const *argv[])
{
	string str;
	cout<<"STRING : ";
	cin>>str;
	cout<<"OUTPUT : "<<SplitStringIn0and1(str)<<endl;
	return 0;
}