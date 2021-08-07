#include<bits/stdc++.h>
using namespace std;



int CountInversion(vector<int>& input){
	if(input.size()<=1) return 0;
	int count  = 0 ;
	for(int i = 0; i<input.size(); i++){
		for(int j = i ; j<input.size() ; j++)
			if(input[i]>input[j]) count++;
	}
	return count;
}






int main(){

	int n;
	cout<<"N : ";
	cin>>n;
	vector<int> input;
	cout<<"ELEMENTS : ";
	for(int i = 0 ; i<n ; i++)
	{
		int t;
		cin>>t;
		input.push_back(t);
	}
	cout<<"COUNT INVERSION IS : "<<CountInversion(input)<<endl;;

	return 0;
}