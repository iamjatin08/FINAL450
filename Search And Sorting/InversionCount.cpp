#include<bits/stdc++.h>
using namespace std;

int Merge(vector<int> & arr, int start, int end){
	if(start>=end) return 0;
	int mid = start + (end - start)/2;
	int i = start , j = mid + 1 , k = 0;
	vector<int> temp;
	int count = 0;
	while(i<=mid and j<=end){
		if(arr[i]>arr[j]){
			count+=(mid - i + 1);
			temp.push_back(arr[j]);
			j++;
			}
		else{
			temp.push_back(arr[i]);
			i++;
		}
	}
	while(i<=mid){
		temp.push_back(arr[i]);
		i++;
	}
	while(j<=mid){
		temp.push_back(arr[j]);
		j++;
	}
	for(k = 0 ; k<temp.size(); k++){
		arr[start++] = temp[k];
	}
	return count;
}

int MergeSort(vector<int> &arr , int start, int end){
	if(start>=end) return 0;
	int mid = start + (end - start)/2;
	int ans1 = MergeSort(arr,start,mid);
	int ans2 = MergeSort(arr,mid + 1, end);
	int ans3 = Merge(arr,start,end);
	return ans1 + ans2 + ans3;

}



int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE : ";
	cin>>n;
	cout<<"ENTER ELEMENTS : ";
	vector<int> arr;
	for(int i = 0 ; i<n ; i++){
		int t;
		cin>>t;
		arr.push_back(t);
	}
	int ans = MergeSort(arr,0,arr.size()-1);
	cout<<"ANSWER : "<<ans<<endl;
	for(int i : arr)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}