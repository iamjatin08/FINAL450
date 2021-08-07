#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> arr, int element){
	int start = 0 , end = arr.size()-1;
	while(start<=end){
		int mid = start + (end-start)/2;
		if(arr[mid] == element) return true;
		else if(arr[mid]>element){
			end = mid-1;
		}
		else start = mid+1;
	}
	return false;
}

vector<int> Union(vector<int> arr1, vector<int> arr2){
	set<int> ans;
	for(int i = 0; i<arr1.size() ;i++)
		ans.insert(arr1[i]);
	for(int i = 0 ; i<arr2.size() ; i++)
		ans.insert(arr2[i]);
	vector<int> v;
	for(auto it = ans.begin() ;it!=ans.end(); it++){
		v.push_back((*it));
	}
	return v;
}

vector<int> intersection(vector<int> arr1 , vector<int> arr2){
	if(arr1.size()==0 or arr2.size()==0) {
		vector<int> ans;
		return ans;
	}

	if(arr1.size()<arr2.size()) 
		return intersection(arr2,arr1);

	vector<int> ans;
	for(int i = 0 ; i<arr2.size() ; i++){
		if(search(arr1,arr2[i])){
			ans.push_back(arr2[i]);
		}
	}

	return ans;

}




int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE OF ARRAY 1 : ";
	cin>>n;
	vector<int> arr1;
	cout<<"ENTER ELEMENTS : ";
	for(int i = 0 ; i<n ; i++){
		int t;
		cin>>t;
		arr1.push_back(t);
	}
	int m;
	cout<<"SIZE OF ARRAY 2 : ";
	cin>>m;
	vector<int> arr2;
	cout<<"ENTER ELEMENTS : ";
	for(int i = 0 ; i<m ; i++){
		int t;
		cin>>t; 
		arr2.push_back(t);
	}

	vector<int> output = intersection(arr1,arr2);
	cout<<"INTERSECTION : ";
	for(int i = 0 ; i<output.size() ; i++){
		cout<<output[i]<<" ";
	}
	cout<<endl;
	cout<<"UNION : ";
	vector<int> ans = Union(arr1,arr2);
	for(int i = 0 ; i<ans.size() ; i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;

	return 0;

}