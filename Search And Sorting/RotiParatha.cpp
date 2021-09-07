#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long> ratings, long long paratha, long long mid){
	long long time = 0;
	long long p = 0;
	for(long long i = 0 ; i<ratings.size() ; i++){
		time = ratings[i];
		long long j = 2;
		while(time <= mid){
			p++;
			time+=(ratings[i]*j);
			j++;
		}
		if(p>=paratha) return true;
	}
	return false;
}


long long MinTime(vector<long long> ratings , long long paratha){
	long long start = 0 , end = 1e8;
	long long ans = 0;
	while(start<=end){
		long long mid = start + (end - start)/2;
		if(check(ratings,paratha,mid)){
			ans = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return ans;
}


int main(int argc, char const *argv[])
{
	int test_cases;
	cin>>test_cases;
	while(test_cases--){
	long long  paratha;
	// cout<<"NUMBER OF PARATHAS : "; 
	cin>>paratha;
	// cout<<"NUMBE OF COOKS : ";
	long long cook;
	cin>>cook;
	// cout<<"ENTER RATINGS : ";
	vector<long long> ratings;
	for(long long i = 0 ; i<cook ; i++){
		long long t;
		cin>>t;
		ratings.push_back(t);
	}
	cout<<MinTime(ratings,paratha)<<endl;
}
	return 0;
}