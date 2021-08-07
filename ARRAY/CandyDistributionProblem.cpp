#include<bits/stdc++.h>
using namespace std;



int candy(vector<int>& arr) {
        int n = arr.size();
        int* dp = new int[n];
        for(int i = 0 ; i<n ; i++) dp[i] = 1;
        int ans = n;
        for(int i = 1 ; i<n ; i++){
            if(arr[i]>arr[i-1] and dp[i-1]>=dp[i]){
                int diff = dp[i-1]-dp[i];
                dp[i]+=(diff+1);
                ans+=(diff+1);
            }
        }
        for(int i = n-2 ; i>=0 ; i--){
            if(arr[i]>arr[i+1] and dp[i+1]>=dp[i]){
                int diff = dp[i+1]-dp[i];
                dp[i]+=(diff+1);
                ans+=(diff+1);
            }
        }
        return ans;
    }



int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE : ";
	cin>>size;
	vector<int> rating;
	cout<<"ENTER RATINGS : ";
	for(int i = 0 ; i<size ; i++){
		int t;
		cin>>t;
		rating.push_back(t);
	}
	cout<<endl;

	cout<<"CANDY : "<<candy(rating)<<endl;
	return 0;
}