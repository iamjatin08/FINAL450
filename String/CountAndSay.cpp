#include<bits/stdc++.h>
using namespace std;

//recursion
string countAndSay(int n) {
    if(n == 1) return "1";

    string s = countAndSay(n-1);
    
    int i = 0;
    string ans = "";
    
    while(i<s.size()){
        char val = s[i];
        int count = 0;
        for(;i<s.size();i++){
            if(s[i]==val) count++;
            else break;
        }
    ans  = ans  + to_string(count) + val;
    }
    return ans;
}

// iterative 
string countAndSay2(int n){
    if(n==1) return "1";
    if(n==2) return "11";
    string s = "11";
    for(int i = 3 ; i<=n ; i++){
        string t = "";
        s = s + '&';
        int count = 1;
        for(int j = 1 ; j<s.size() ; j++){
            if(s[j]!=s[j-1]){
                t = t + to_string(count);
                t = t + s[j-1];
                count = 1;
            }
          else count++;
        }
        s = t;

    }
    return s;
}




int main(int argc, char const *argv[])
{
    int n = 4;
    cout<<countAndSay2(n)<<endl;
    cout<<countAndSay(n)<<endl;
    return 0;
}