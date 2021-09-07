#include<bits/stdc++.h>
using namespace std;

int FindPivot(vector<int> arr){
	int low = 0;
	int hi = arr.size()-1;

	while(low<hi){
		int mid = low + (hi - low)/2;
		if(arr[mid]<=arr[hi]){
			hi = mid;
		}
		else{
			low = mid + 1;
		}
	}
	return arr[low];
}

 int findMin(vector<int>& arr) {
       
        for(int i = 1 ; i<arr.size(); i++){
            if(arr[i-1]>arr[i]){
                return arr[i];
            }
        }
        return arr[0];
    }

int main(int argc, char const *argv[])
{
	
	vector<int> arr = {3,3,1,3};

	cout<<findMin(arr)<<endl;

	return 0;
}