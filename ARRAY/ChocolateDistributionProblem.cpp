#include<bits/stdc++.h>
using namespace std;



int MinDiff(vector<int> packets , int m){
	int n = packets.size();
	sort(packets.begin(),packets.end());

	int ans = packets[m-1] -  packets[0];
	for(int i = 0 , j = m-1 ; j<n ; i++ , j++){
		ans = min(ans,(packets[j] - packets[i]));
	}
	return ans;
}






int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE : ";
	cin>>size;
	vector<int> packets;
	for(int i = 0 ;  i<size ; i++){
		int t;
		cin>>t;
		packets.push_back(t);
	}
	int m ;
	cout<<"NUMBER OF STUDENTS : ";
	cin>>m;

	cout<<endl;
	cout<<":MIN DIFF : "<<MinDiff(packets,m)<<endl;
	return 0;
}