#include <bits/stdc++.h>
using namespace std;

string secFrequent (vector<string> arr)
{
    unordered_map<string, int> occ;
    for (int i = 0; i < seq.size(); i++)
        occ[seq[i]]++;
 
    int first_max = INT_MIN, sec_max = INT_MIN;
    for (auto it = occ.begin(); it != occ.end(); it++) {
        if (it->second > first_max) {
            sec_max = first_max;
            first_max = it->second;
        }
 
        else if (it->second > sec_max &&
                 it->second != first_max)
            sec_max = it->second;
    }
 
    for (auto it = occ.begin(); it != occ.end(); it++)
        if (it->second == sec_max)
            return it->first;               
}

 int main(int argc, char const *argv[])
{
    int n;
    vector<string> v;
    for(int i = 0 ; i<n; i++){
        string t;
        cin>>t;
        v.push_back(t);
    }
    cout<<"ANSWER : "<<secFrequent(v)<<endl;
    return 0;
}