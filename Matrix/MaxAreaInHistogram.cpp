#include<bits/stdc++.h>
using namespace std;

//brute force approach TC-O(n*n) SC-O(1)
int MaxAreaInHistogram(int arr[] , int n){
	int area = 0;
	for(int i = 0 ; i<n ; i++){
		int count = 0 ;
		int ans = 0;
		int element = arr[i];
		for(int j = 0 ; j<n ; j++){
			if(arr[j]-element<0){
				count = 0;
			}
			else count++;
			ans = max(ans,count);

		}
		area = max(area,(element*ans));
	}
	return area;
}


//optimised approach TC-O(n) and SC-O(n)
int MaxAreaInHistogramOptimised(int * arr, int n){
	
	int * left = new int[n];
    int * right = new int[n];
    stack<int> s;
    
    //for left smaller index array
    s.push(0);
    left[0] = -1;
    for(int i = 1; i<n ; i++){
        while(!s.empty() and arr[i]<=arr[s.top()]) s.pop();
        if(s.empty()) left[i] = -1;
        else left[i] = s.top();
        s.push(i);
    }
    //clear the stack
    while(!s.empty()) s.pop();
    
    //for right index array
    s.push(n-1);
    right[n-1] = n;
    for(int i = n-2 ; i>=0 ; i--){
        while(!s.empty() and arr[i]<=arr[s.top()]) s.pop();
        if(s.empty()) right[i] = n;
        else right[i] = s.top();
        s.push(i);
    }
    
    //calculating the answer
    int ans = 0;
    for(int i = 0 ; i<n ; i++){
        int width =  right[i] - left[i] - 1;
        ans = max(ans,(width*arr[i]));
    }
    
    //deleting the array
    delete [] left;
    delete [] right;
    
    return ans;   

}




int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,5,3,3,2};
	int n = sizeof(arr)/sizeof(int);
	cout<<"MAX AREA : "<<MaxAreaInHistogramOptimised(arr,n)<<endl;
	cout<<"MAX AREA : "<<MaxAreaInHistogram(arr,n)<<endl;
	
	
	return 0;
}