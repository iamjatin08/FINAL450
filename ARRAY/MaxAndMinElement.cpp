#include<bits/stdc++.h>
using namespace std;



pair<int,int> MaxAndMin(vector<int> input){
	int minimum = INT_MAX;
	int maximum = INT_MIN;
	for(int i = 0 ; i<input.size() ; i++){
		minimum = min(input[i],minimum);
		maximum = max(input[i],maximum);
	}
	pair<int,int> p(maximum,minimum);
	return p;

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
	pair<int, int> p = MaxAndMin(input);
	cout<<"MAX : "<<p.first<<" "<<"MIN : "<<p.second<<endl;
	cout<<endl;
	return 0;
}