#include<bits/stdc++.h>
using namespace std;

double Median(vector<int> v1, vector<int> v2){
	int n = v1.size() ;
	int m = v2.size();
	int i = 0;
	int j = 0;
	int k = 0;
	vector<int> ans(n+m);

	while(i<n and  j<m ){
		if(v1[i]>v2[j]){
			ans[k++] = v2[j++];
		}
		else{
			ans[k++] = v1[i++];
		}
	}
	while(i<n){
		ans[k++] = v1[i++];
	}
	while(j<m){
		ans[k++] = v2[j++];
	}
	int mid = (n+m)/2;
	if((n+m)%2 == 0){
		return (ans[mid-1]*(1.0)+ans[mid])/2;
	}
	else 
	return ans[mid]*(1.0);


}



int main(int argc, char const *argv[])
{
	int n;
	cout<<"ENTER ARRAY 1 SIZE : ";
	cin>>n;
	vector<int> v1,v2;
	cout<<"ARRAY 1 DATA : ";
	for(int i = 0 ; i<n ; i++){
		int t ;
		cin>>t;
		v1.push_back(t);
	}
	int m;
	cout<<"ENTER ARRAY 2 SIZE : ";
	cin>>m;
	cout<<"ARRAY 2 DATA : ";
	for(int i = 0 ; i<m ; i++){
		int t ;
		cin>>t;
		v2.push_back(t);
	}

	cout<<"MEDIAN  IS "<<Median(v1,v2)<<endl;

	return 0;
}