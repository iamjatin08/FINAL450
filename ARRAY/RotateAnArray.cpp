#include<bits/stdc++.h>
using namespace std;


int RotateAnArray(vector<int> &input){
	int temp = input[input.size()-1];
	for(int i = input.size()-1 ; i>=1 ; i--){
		input[i] = input[i-1];
	}
	input[0] = temp;
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

	RotateAnArray(input);

	for(int i = 0 ; i<n ; i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
	return 0;

}