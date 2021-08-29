#include<bits/stdc++.h>
using namespace std;


string MinimumWindowSubstring(string s1, string s2){
	if(s1.size()<s2.size()) return "";
	string ans  = "";

	unordered_map<char,int> map2;
	for(int i =  0 ;  i<s2.size() ; i++) 
		map2[s2[i]]++;

	int mct = 0;
	int dmct = s2.size();

	unordered_map<char,int> map1 ;

	int i = 0 ;
	int  j = 0;

	while(true){
		bool f1 = false, f2 = false;
		//acquire
		while(i<(s1.size()) and mct<dmct){
			char ch = s1[i];
			map1[ch]+=1;

			if(map1[ch]<=map2[ch]) {
				mct++;
			}
			f1 = true;
			i++;

		}

		
		//collect answer and release
		while(j<i and mct == dmct){
			string pans = s1.substr(j,i-j);
			if(ans.size()==0 or ans.size()>pans.size()){
				ans = pans;
			}

			char ch = s1[j];
			if(map1[ch]==1) map1.erase(ch);
			else map1[ch]--;

			if(map1[ch]<map2[ch])
				mct--;
			f2 = true;
			j++;
		}
		if(f1==false and f2 == false) break;

	}

	return ans;

}




int main(int argc, char const *argv[])
{
	string s,t;
	cout<<"S : ";
	cin>>s;
	cout<<"T : ";
	cin>>t;

	string ans = MinimumWindowSubstring(s,t);
	cout<<"ANS : "<<ans<<endl;
	return 0;
}