#include<bits/stdc++.h>
using namespace std;

// TC O(n) and SC O(n)
int MinSwaps(string s){
	vector<int> v;
	for(int i = 0 ; i<s.size() ; i++){
		if(s[i] == '[') v.push_back(i);
	}
	int idx = 0 , ans = 0;
	int count  = 0;
	for(int i = 0 ; i<s.size(); i++){
		if(s[i]=='[') {
			count++;
			idx++;
		}
		else{
			count--;
			if(count<0){
				ans += (v[idx] - i);
				swap(s[v[idx]],s[i]);
				count = 1;
				idx++;
			}
		}
	}
	return ans;
}


int main(int argc, char const *argv[])
{
	string s = "]][[";
	// cout<<"STRING : ";
	// cin>>s;
	cout<<"ANSWER : "<<MinSwaps(s)<<endl;
	return 0;
}