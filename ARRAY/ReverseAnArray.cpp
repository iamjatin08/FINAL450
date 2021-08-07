#include<bits/stdc++.h>
using namespace std;


vector<int> Reverse(vector<int> input){
	if(input.size() <= 1 ) return input;

	int i = 0 , j = input.size()-1;
	while(i<j){
		swap(input[i],input[j]);
		i++;
		j--;
	}
	return input;



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
	vector<int> output = Reverse(input);
	for(int i = 0;  i<output.size() ; i++){
		cout<<output[i]<<" ";
	}
	cout<<endl;
	return 0;
}