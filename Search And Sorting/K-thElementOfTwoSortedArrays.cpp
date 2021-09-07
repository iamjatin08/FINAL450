#include<bits/stdc++.h>
using namespace std;


int kthElement(int arr1[], int arr2[], int n, int m, int l)
{
    int * dp = new int[n+m];
    int k = 0 ;
    int i = 0 ,  j = 0 ;
    while(i<n and j<m){
        if(arr1[i]>arr2[j]){
            dp[k++] = arr2[j++];
        }
        else{
            dp[k++] = arr1[i++];
        }
    }
    while(i<n){
        dp[k++] = arr1[i++];
    }
    while(j<m){
        dp[k++] = arr2[j++];
    }
    int ans = dp[l-1];
    delete [] dp;
    return ans;
}


int main(int argc, char const *argv[])
{
	
	return 0;
}