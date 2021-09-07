#include<bits/stdc++.h>
using namespace std;
bool check(long long cows, vector<long long> &position , long long distance){
	int n = position.size();
	int count = 1;
	long long lastPosition = position[0];

	for(int i = 1 ; i<n ;i++){
		if(position[i] - lastPosition >= distance){
			lastPosition = position[i];
			count++;
		}
		if(count == cows) return true;

	}
	return false;
}

long long LargestMinDistance(vector<long long >& position , long long cows){

		sort(position.begin(),position.end());
		int n = position.size();
		long long  start = 0;
		long long end = position[n-1] - position[0];

		long long ans = -1;

		while(start<=end){
			long long mid = start + (end-start)/2;

			if(check(cows,position,mid)){
				ans = mid;
				start = mid+1;
			}
			else {
				end = mid-1;
			}
		}
		return ans;
}


int main(int argc, char const *argv[])
{
	long long t;
	cin>>t;
	while(t--){
	long long n , c;
	cin>>n>>c;
	vector<long long > stalls;
	for(long long i = 0 ; i<n ; i++){
		long long l;
		cin>>l;
		stalls.push_back(l);
	}
	cout<<LargestMinDistance(stalls,c)<<endl;
	}
	return 0;
}