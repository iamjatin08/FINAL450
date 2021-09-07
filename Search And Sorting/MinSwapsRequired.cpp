#include<bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>&arr){
	int n = arr.size();
    vector<pair<int,int>> v(n);
	for(int i = 0 ; i<n ; i++){
		v[i] = {arr[i],i};
	}
	sort(v.begin(),v.end());
	int ans = 0;
	for(int i = 0 ; i < n ; i++){
		if(v[i].second == i) continue;
		else{
			ans++;
			swap(v[i],v[v[i].second]);
			i--;
		}
	}
	return ans;
}



int main(int argc, char const *argv[])
{
	vector<int> arr   = {7 ,16 ,14 ,17, 6, 9, 5, 3, 18};
	cout<<"ANSWER : "<<minSwaps(arr)<<endl;
	return 0;
}