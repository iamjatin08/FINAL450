#include<bits/stdc++.h>
using namespace std;

bool check(int * arr, int n , int mid ,int k ){
	long long sum = 0 ;
	int count = 1;
	for(int i = 0; i<n ; i++){
		if(sum + arr[i] > mid){
			count++;
			sum = arr[i];
		}
		else{
			sum+=arr[i];
		}
	}
	return count<=k;
}


long long minTime(int arr[], int n, int k){
    
    long long start = arr[0] , end  = 0;
    for(int i = 0 ; i<n ; i++){
    	if(start<arr[i])
    		start = arr[i];
    	end += arr[i];
    }
    long long ans ;
    while(start<=end){
    	long long mid = start + (end - start)/2;
    	if(check(arr,n,mid,k)){
    		ans = mid;
    		end = mid - 1;
    	}
    	else{
    		start = mid + 1;
    	}
    }
    return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"SIZE : ";
	cin>>n;
	int k;
	cout<<"NUMBER OF PAINTERS : ";
	cin>>k;
	cout<<"ENTER BOARDS LENGTHS : ";
	int arr[n];
	for(int i = 0 ; i<n ; i++){
		cin>>arr[i];
	}
	cout<<"MINIMUM TIME : "<<minTime(arr,n,k)<<endl;
	
	return 0;
}