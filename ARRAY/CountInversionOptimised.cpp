#include<bits/stdc++.h>
using namespace std;



int Merge(vector<int>& arr,int start, int end){
	if(start>=end) return 0;

	int i = start , mid = (start+(end-start)/2);
	int j = mid+1;

	int* temp = new int[end-start+1];
	int k = 0;
	int count = 0 ;
	while(i<=mid and j<=end){
		if(arr[i]>arr[j]){
			count+=(mid-i)+1;
			temp[k++] = arr[j++];
		}
		else{
			temp[k++] = arr[i++];
		}
	}
	while(i<=mid) {
		temp[k++] = arr[i++];

		}
	while(j<=end) temp[k++] = arr[j++];

	k = 0;
	i = start;
	j = end;
	while(i<=j){
		arr[i++] = temp[k++];
	}
	delete [] temp;
	return count;

}


int MergeSort(vector<int>& arr, int start, int end){

	if(start>=end) return 0;

	int mid = start+(end-start)/2;

	int ans1  = MergeSort(arr,start,mid);
	int ans2 = 	MergeSort(arr,mid+1,end);

	int ans = Merge(arr,start,end);
	return ans+ans1+ans2;



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
	cout<<"COUNT INVERSION IS : "<<MergeSort(input,0,n-1)<<endl;

	for(int i = 0 ; i<n ; i++)
		cout<<input[i]<<" ";
	cout<<endl;

	return 0;
}