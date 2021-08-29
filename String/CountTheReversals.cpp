#include<bits/stdc++.h>
using namespace std;


int CountTheReversals(string s){
	if(s.size()%2!=0) return -1;

	stack<char> st;
	int c1 = 0 ,c2 = 0;
	for(int i = 0 ; i<s.size(); i++){
		if(s[i]=='{'){
			c1++;
			st.push(s[i]);
		}
		else if(!st.empty()){
			c1--;
			st.pop();
		}
		else c2++;
	}
	int ans = 0;
	if(c1%2==0) ans+=(c1/2);
	else ans+=(1+(c1-1)/2);
	if(c2%2==0) ans+=c2/2;
	else ans+=(1+(c2-1)/2);
	return ans;
}





int main(int argc, char const *argv[])
{
	string s;
	cout<<"STRING : ";
	cin>>s;
	cout<<"ANSWER : "<<CountTheReversals(s)<<endl;
	return 0;
}