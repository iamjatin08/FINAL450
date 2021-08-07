#include<bits/stdc++.h>
using namespace std;




int DuplicateNumber(vector<int>& input){
	sort(input.begin() , input.end());

	for(int i = 0 ; i<input.size()-1 ; i++){
		if(input[i]==input[i+1]) return input[i];
	}

	return -1;
}







int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE : ";
	cin>>size;
	cout<<"DATA : "; 
	vector<int> input;
	for(int i = 0 ; i<size;  i++){
		int t;
		cin>>t;
		input.push_back(t);
	}
	cout<<"DUPLICATE ELEMENT IS "<<DuplicateNumber(input)<<endl;
	return 0;
}