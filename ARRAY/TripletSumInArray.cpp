#include<bits/stdc++.h>
using namespace std;

//brute force approach
bool TripletSumArray1(vector<int> input, int sum){
	int n = input.size();
	for(int i = 0 ;  i<n ; i++){
		for(int j = i+1; j<n ;j++){
			for(int k = j+1 ; k<n ;k++){
				if(input[i]+input[j]+input[k]==sum) return true;
			}
		}
	}
	return false;
}

//sorting approach
bool TripletSumArray2(vector<int> input, int sum){
	int n = input.size();
	sort(input.begin(), input.end());
	for(int i = 0 ; i<n ; i++){
		int l = i+1 , r= n-1;
		while(l<r){
			if(input[i]+input[l]+input[r]==sum) return true;
			else if(input[i]+input[l]+input[r]>sum) r--;
			else l--;
		}

	}
	return false;
}

// set approach
bool TripletSumArray3(vector<int> & input, int sum){
	int n = input.size();
	for(int i = 0 ; i<n ; i++){
		int curr = sum - input[i];
		unordered_set<int> s;
		for(int j = i+1 ; j<n ; j++){
			if(s.find(curr-input[j])!=s.end()) return true;
			s.insert(input[j]);
		}
	}
	return false;
}



int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE : ";
	cin>>size;
	cout<<"ENTER ELEMENTS : ";
	vector<int> input;
	for(int i = 0  ; i<size ; i++){
		int t;
		cin>>t;
		input.push_back(t);
	}
	cout<<"TARGET SUM : ";
	int sum;
	cin>>sum;

	
	cout<<"ANSWER IS "<<TripletSumArray1(input,sum)<<endl;
	cout<<"ANSWER IS "<<TripletSumArray2(input,sum)<<endl;
	cout<<"ANSWER IS "<<TripletSumArray3(input,sum)<<endl;
	
	return 0;
}