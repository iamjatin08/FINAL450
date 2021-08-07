#include<bits/stdc++.h>
using namespace std;


void MoveAllNegative(vector<int> &input){
	int j = 0;
	for(int i = 0 ; i<input.size() ; i++){
		if(input[i]<0){
			swap(input[i],input[j]);
			j++;
		}
	}
	return;
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

	MoveAllNegative(input);

	for(int i = 0 ; i<n ; i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
	return 0;

}