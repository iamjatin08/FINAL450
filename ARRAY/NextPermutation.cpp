#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> input){
	for(int i = 0 ; i<input.size()-1 ; i++){
		if(input[i]<input[i+1]) return false;
	}
	return true;
}


vector<int> NextPermutation(vector<int> input){
	if(check(input)){
		reverse(input.begin(), input.end());
		return input;
	}

	int i = input.size()-2;
	for(;i>=0 ; i--){
		if(input[i]<input[i+1]) break;
	}
	int j = input.size()-1;
	for(;j>i and j>=0 ; j--){
		if(input[i]<input[j]) break;
	}
	swap(input[i],input[j]);
	reverse(input.begin()+i+1,input.end());
	return input;
}







int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE : ";
	cin>>size;
	cout<<"ENTER ELEMENTS : "; 
	vector<int> input;
	for(int i = 0 ; i<size;  i++){
		int t;
		cin>>t;
		input.push_back(t);
	}
	cout<<endl; 		
	vector<int> answer = NextPermutation(input);
	cout<<"NEXT PERMUTATION : ";
	for(int i = 0 ; i<answer.size(); i++)
		cout<<answer[i]<<" ";
	cout<<endl;
	return 0;
}