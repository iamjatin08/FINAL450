#include<bits/stdc++.h>
using namespace std;
void permute(string a, int l, int r,vector<string>& ans)
{
// Base case
if (l == r)
    ans.push_back(a);
else
{
    // Permutations made
    for (int i = l; i <= r; i++)
    {

        // Swapping done
        swap(a[l], a[i]);

        // Recursion called
        permute(a, l+1, r,ans);

        //backtrack
        swap(a[l], a[i]);
    }
}
}
vector<string>find_permutation(string s)
{
    vector<string> ans;
    permute(s,0,s.size()-1,ans);
    return ans;
    // Code here there
}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"ENTER STRING : ";
    cin>>s;
    vector<string> ans  = find_permutation(s);
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}