#include<bits/stdc++.h>
using namespace std;


bool findPair(vector<int> arr, int n, int t){
    
    set<int> s;
    for(int i = 0 ; i<n ; i++){
        if(s.find(t - arr[i])!=s.end() or s.find(arr[i] - t)!=s.end())
        {
            return true;
        }
        
        s.insert(arr[i]);
    }
    return false;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int t ;
	cin>>t;
	vector<int> v;
	cout<<"ENTER DATA :";
	for(int i = 0 ; i<n ; i++){
		int m;
		cin>>m;
		v.push_back(m);

	}
	cout<<findPair(v,n,t)<<endl;
	return 0;
}