#include<bits/stdc++.h>
using namespace std;


pair<int,int> KthMaxAndMin(vector<int> input, int k){

	int i = input.size()-k;
	priority_queue<int,vector<int>,greater<int>> pqMin;
	priority_queue<int> pqMax;
	
	for(int i = 0;  i<input.size() ; i++){
		pqMin.push(input[i]);
		pqMax.push(input[i]);
	}

	while(pqMin.size()>k)
	{
		pqMin.pop();
		pqMax.pop();
	}

	int Max = pqMin.top();
	int Min = pqMax.top();

	pair<int,int> ans;
	ans.first = Max;
	ans.second = Min;
	return ans;

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
	int k;
	cout<<"ENTER K : ";
	cin>>k;
	pair<int, int> p = KthMaxAndMin(input,k);
	cout<<"Kth MAX : "<<p.first<<", "<<"Kth MIN : "<<p.second<<endl;
	cout<<endl;
	return 0;
}