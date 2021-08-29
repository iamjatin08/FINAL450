#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string s = strs[0];
    string ans = "";
   bool flag = true;
    for(int i = 0 ; i<s.size() ; i++){
        for(int j = 1 ; j<strs.size() ; j++){
            if(s[i]!=strs[j][i]) {
                flag = false;
                break;
            }
        }
        if(flag==false) break;
        ans = ans + s[i];
    }
    return ans;
}


int main(int argc, char const *argv[])
{
    cout<<"STRING VECTOR SIZE : ";
    int n;
    cin>>n;
    cout<<"ENTER STRINGS : ";
    vector<string> strs;
    for(int i = 0 ; i<n ; i++){
        string t;
        cin>>t;
        strs.push_back(t);
    }
    string ans = longestCommonPrefix(strs);
    cout<<"LONGEST COMMON PREFIX IS : "<<ans<<endl;

    return 0;
}