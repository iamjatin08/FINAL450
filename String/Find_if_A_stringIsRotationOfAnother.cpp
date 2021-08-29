#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size()) return false;
        string s = s1 + s1;
        int n = s2.size();
        for(int i = 0 , j = n-1 ; j<s.size() ; i++,j++){
            if(s.substr(i,(j-i+1)).compare(s2)==0) return true;
        }
        return false;
        
    }





int main(int argc, char const *argv[])
{
	string s1,s2;
	cout<<"ENTER STRING 1 : ";
	cin>>s1;
	cout<<"ENTER STRING 2 :";
	cin>>s2;
	if(areRotations(s1,s2)) cout<<"THEY ARE ROTATION OF EACH OTHER"<<endl;
	else cout<<"THEY ARE NOT ROTATION OF EACH OTHER"<<endl;


	return 0;
}