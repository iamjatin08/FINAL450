#include<bits/stdc++.h>
using namespace std;

int MaxWater(vector<int> block){
	int n = block.size();

	int * dp_left = new int[n];
	dp_left[0] = block[0];

	for(int i = 1 ; i<n ; i++){
		dp_left[i] = max(dp_left[i-1],block[i]);
	}

	int * dp_right = new int[n];
	dp_right[n-1] = block[n-1];
	for(int i = n-2 ; i>=0 ; i--){
		dp_right[i] = max(dp_right[i+1],block[i]);
	}

	int max_water = 0;
	for(int i = 0 ; i<n ; i++){
		max_water+= min(dp_left[i],dp_right[i])-block[i];
	}
	delete [] dp_left;
	delete [] dp_right;

	return max_water;
}



int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE : ";
	cin>>size;
	vector<int> block;
	cout<<"BLOCKS : ";
	for(int i = 0 ; i<size ; i++){
		int t;
		cin>>t;
		block.push_back(t);
	}

	cout<<endl;
	cout<<"MAXIMUM WATER : "<<MaxWater(block)<<endl;
	return 0;
}