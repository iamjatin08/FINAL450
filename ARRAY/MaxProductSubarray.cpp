#include<bits/stdc++.h>
using namespace std;

// bool check(vector<int>& arr){
// 	for(int i = 0; i<arr.size()-1; i++){
// 		if((arr[i]!=0 and arr[i+1]<0) or (arr[i]<0 and arr[i+1]!=0)) 
// 			return true;
// 	}
// 	return false;
// }


int maxProductSubarray(vector<int> &arr){
	if(arr.size()==1) return arr[0];
	// if(check(arr)) return 0;

	int n = arr.size();
	int omax = INT_MIN;
	int currentmin = 1;
	int currentmax = 1;
	for(int i = 0; i<n ; i++){
		if(arr[0]==0){
			currentmax = 1;
			currentmin = 1;
			continue;
		}
		else{
			int temp = currentmax;
			currentmax = max(arr[i],max(currentmax*arr[i],currentmin*arr[i]));
			currentmin = min(arr[i],min(temp*arr[i],currentmin*arr[i]));
			if(currentmax>omax) omax = currentmax;

		}

	}
	return omax;
}


int main(int argc, char const *argv[])
{
	
	vector<int> arr = {-2,-3,4,5,6,0};
	cout<<maxProductSubarray(arr)<<endl;
	return 0;
}