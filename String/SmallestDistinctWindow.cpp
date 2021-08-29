#include<bits/stdc++.h>
using namespace std;

int SmallestDistinctWindow(string s){
	int len = s.size();
	unordered_set<char> Set; // unique elements
	for(char ch : s){
		Set.insert(ch);
	}

	unordered_map<char,int> mp;
	int i = 0 , j = 0;
	while(1){
		bool flag1 = false, flag2 = false;
		// cout<<"WHILE LOOP ENTERED"<<endl;
		while(i<s.size() and mp.size()<Set.size()){
			// cout<<"1st LOOP"<<endl;
			mp[s[i]]++;
			flag1 = true;
			i++;
		}

		while(j<i and mp.size() == Set.size()){
			// cout<<"2nd Loop"<<endl;
			int plen = i - j;
			len = min(plen,len);
			flag2 = true;
			char ch = s[j];
			if(mp[ch]==1) mp.erase(ch);
			else mp[ch]--;
			j++;
		}
		if(flag1 == false and flag2 == false) break;
	}

	return len;
}



int main(int argc, char const *argv[])
{
	string s;
	cout<<"ENTER STRING : ";
	cin>>s;
	// s = "abcdabe";
	cout<<"ANSWER : "<<SmallestDistinctWindow(s)<<endl;
	return 0;
}