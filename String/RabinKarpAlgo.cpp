#include<bits/stdc++.h>
using namespace std;

long long hashfunc(string s){
    int p = 1;
    long long ans = 0;
    for(int i = s.size()-1 ; i>=0 ; i--){
            ans += (s[i] - 96)*p;
            ans = ans%1000000009;
            p*=19;
    }
    return ans;
}

int repeatedStringMatch(string a, string b) {
    if(a.size() == 1){
        int count = 0;
        char val = a[0];
        for(int i = 0 ; i<b.size() ; i++){
            char ch = b[i];
            if(ch == val) count++;
        }
        return count;
    }
    long long n = hashfunc(a);
    int i = 0 , j = a.size()-1;
    int count = 0;
    for(; j<b.size() ; i++ , j++){
        string temp = b.substr(i , a.size());
        long long t = hashfunc(temp);
        if(t == n) count++;
    }
    return count;
    
}

int main(int argc, char const *argv[])
{
	string a ,b;
	cout<<"STRING A : ";
	cin>>a;
	cout<<"STRING B : ";
	cin>>b;
	cout<<"ANSWER : "<<repeatedStringMatch(a,b)<<endl;	
	return 0;
}

