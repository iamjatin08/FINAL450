#include<bits/stdc++.h>
using namespace std;


int *  solution(vector<int> arr){
	int n = arr.size();
	int * dp = new int[n+1];
	for(int i = 0 ; i<=n ; i++)
		dp[i] = 0;
	int repeated , missing;
	for(int i = 0 ; i<n ; i++){
		dp[arr[i]]+=1;
		if(dp[arr[i]]==2){
			// cout<<"FEQ : "<<dp[arr[i]]<<endl;
			// cout<<"REPEATED : "<<arr[i]<<endl;
			repeated = arr[i];
		}
	}
	for(int i = 1 ; i<=n ; i++){
		if(dp[i] == 0){
			// cout<<"MISSING : "<<i<<endl;
			missing = i;
		}
	}
	// vector<int> ans = {repeated,missing};
	int *ans = new int[2];
	ans[0] = repeated;
	ans[1] = missing;
	// cout<<"ans[0] : "<<ans[0]<<endl;
	// cout<<"ans[1] : "<<ans[1]<<endl;

	// ans[1] = missing;
	delete  [] dp;
	return ans;
}


int main(int argc, char const *argv[])
{
	// int n;
	// cout<<"ENTER SIZE : ";
	// cin>>n;
	// cout<<"ENTER DATA : ";
	vector<int> arr = {2,2};
	// for(int i = 0 ; i<n ; i++){
	// 	int t;
	// 	cin>>t;
	// 	arr.push_back(t);
	// }
	// vector<int> ans  = solution(arr);
	// cout<<"ANSWER : ";
	// for(int i : ans)
	// 	cout<<i<<" ";
	int * ans = solution(arr);
	cout<<"ANSWER : "<<an[0]<<arr[1]<<endl;
	cout<<endl;
	

	return 0;
}