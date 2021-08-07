#include<bits/stdc++.h>
using namespace std;



int kadaneAlgo(vector<int> input){
	int sum = INT_MIN;
	int current = 0;
	for(int i = 0 ; i<input.size() ; i++){
		current+=input[i];
		if(current>sum) sum = current;
		if(current<0) current =0;
	}
	return sum;


}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE OF ARRAY : ";
	cin>>n;
	vector<int> input;
	cout<<"ENTER ELEMENTS : ";
	for(int i = 0 ; i<n ; i++){
		int t;
		cin>>t;
		input.push_back(t);
	}

	cout<<"MAX SUM SUBARRAY : "<<kadaneAlgo(input)<<endl;
	cout<<endl;
	return 0;

}