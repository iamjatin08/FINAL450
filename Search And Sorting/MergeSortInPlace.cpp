#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>& arr, int start,  int end)
{	
	int mid = start + (end - start)/2;
    int start2 = mid + 1;
 
    if (arr[mid] <= arr[start2]) {
        return;
    }
 
    while (start <= mid && start2 <= end) {
 
        if (arr[start] <= arr[start2]) {
            start++;
        }
        else {
            int value = arr[start2];
            int index = start2;
 
            while (index != start) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[start] = value;
 
            start++;
            mid++;
            start2++;
        }
    }
}
 
void MergeSort(vector<int> &arr, int start, int end){
    if(start >= end) return;
    int mid = start + (end - start) / 2;
   	MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, start, end);
   
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
	MergeSort(arr,0,arr.size()-1);
	for(int i = 0 ; i<arr.size() ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}