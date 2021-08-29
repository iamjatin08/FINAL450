#include<bits/stdc++.h>
using namespace std;

bool Balanced(string x){
	stack<char> s;
        for(int i = 0 ;i<x.size(); i++){
            if(x[i]=='(' or x[i]=='{' or x[i]=='['){
                s.push(x[i]);
                continue;
            }
            else if(!s.empty()){
                if(x[i] == ')' and s.top() =='('){
                    s.pop();
                }
             else if(x[i] == '}' and s.top() =='{'){
                    s.pop();
                }  
              else if(x[i] == ']' and s.top() =='['){
                    s.pop();
                }                
                else return false;
            }
            else return false;
        }
        return s.size()==0;
}






int main(int argc, char const *argv[])
{
	string s;
	cout<<"STRING : ";
	cin>>s;
	if(Balanced(s)){
		cout<<"BALANCED"<<endl;
	}
	else cout<<"NOT BALANCED"<<endl;
	return 0;
}