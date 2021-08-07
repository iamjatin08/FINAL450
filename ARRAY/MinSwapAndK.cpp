#include<bits/stdc++.h>
using namespace std;



int MinSwaps(vector<int> arr,int k){
	int n = arr.size();
	int good = 0 ,bad = 0 ,ans = INT_MAX;
	for(int i = 0 ;i<n ; i++){
		if(arr[i]<=k) good++;
	}
	for(int i = 0 ; i<good ; i++){
		if(arr[i]>k) bad++;
	}
	int i = 0 , j = good-1;
	while(j<n){
		ans = min(ans,bad);
		j++;
		if(arr[j]>k and j<n) bad++;
		if(arr[i]>k) bad--;
		i++;
	}
	return ans;
}






int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE OF ARRAY : ";
	cin>>size;
	vector<int> input;
	cout<<"ENTER ELEMENTS : ";
	for(int i = 0 ; i<size ; i++){
		int t;
		cin>>t;
		input.push_back(t);
	}

	int k;
	cout<<"K : ";
	cin>>k;
	cout<<endl;
	cout<<"MIN SWAPS : "<<MinSwaps(input,k)<<endl;
	return 0;
}