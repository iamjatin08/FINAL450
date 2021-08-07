#include<bits/stdc++.h>
using namespace std;

vector<int> ArrayOf012(vector<int> input){
	int zero = 0;
	int one = 0;
	int two = 0;
	for(int i = 0 ; i<input.size() ; i++){
		if(input[i]==0){
			zero++;
		}	
		else if(input[i]==1){
			one++;
		}
		else{
			two++;
		}
	}
	int k = 0 ;
	while(zero!=0){
		input[k++] = 0;
		zero--;
	}
	while(one!=0){
		input[k++] = 1;
		one--;
	}
	while(two!=0){
		input[k++] = 2;
		two--;
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
	input = ArrayOf012(input);
	for(int i = 0 ; i<size ; i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
	return 0;
}