#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long> trees,long long mid, long long m){
	long long sum = 0;
	for(long long i : trees){
		if(i>mid){
			sum+=(i - mid);
		}
	}
	return m<=sum;
}

long long MaxHeight(vector<long long> trees , long long m){
	long long start = 0;
	long long end = 0;
	for(long long i : trees){
		if(i > end) 
			end = i;
	}
	long long ans;
	while(start<=end){
		long long mid = start + (end - start)/2;
		if(check(trees,mid,m)){
			ans = mid;
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	return ans;
}



int main(int argc, char const *argv[])
{
	long long n,m;
	cin>>n>>m;

	vector<long long> trees;
	for(long long i = 0 ; i<n ; i++){
		long long t;
		cin>>t;
		trees.push_back(t);
	}
	
	cout<<MaxHeight(trees,m)<<endl;

	return 0;
}