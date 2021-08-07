#include<bits/stdc++.h>
using namespace std;


void ThreeWaysPartition(vector<int>& arr, int a, int b){
	int n = arr.size();
	int left = 0 , right = n-1;
	//we will iterate each element 
	//check arr[i]<a (if yes) swap it with the left element of the array and left++
	//check arr[i]>b (if yes) swap it with the right elemtn of the array and right--

	for(int i = 0 ; i<n ; i++){
		if(arr[i]<a){
			swap(arr[i],arr[left]);
			left++;
		}
		else if(arr[i]>b){
			swap(arr[i],arr[right]);
			right--;
			i--;
		}
	}
}




int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE OF ARRAY : ";
	cin>>size;
	vector<int> arr;
	cout<<"ENTER DATA : ";
	for(int i = 0 ; i<size ; i++){
		int t;
		cin>>t;
		arr.push_back(t);
	}
	cout<<"RANGE : ";
	int a,b;
	cin>>a>>b;

	cout<<endl;
	for(int i = 0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}