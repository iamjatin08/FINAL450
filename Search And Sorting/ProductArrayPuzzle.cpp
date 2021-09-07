#include<bits/stdc++.h>
using namespace std;


vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       
		long long *left = new long long[n];
		long long *right = new long long[n];

		left[0] = 1;
		// cout<<"LEFT PRODUCT : "<<left[0];
		for(int i = 1 ; i<n ; i++){
			left[i] = left[i-1] * arr[i-1];
			// cout<<" "<<left[i];
		}
		// cout<<endl;

		right[n-1] = 1;
		for(int i = n-2 ; i>=0 ; i--){
			right[i] = arr[i+1]*right[i+1];
		}
		// cout<<"RIGHT SUM : ";
		for(int i = 0 ; i<n ; i++){
			// cout<<right[i]<<" ";
		}
		// cout<<endl;
		vector<long long> answer;
		for(int i = 0  ; i<n ; i++){
			answer.push_back(left[i] * right[i]);
		}

		delete [] left;
		delete [] right;

		return answer;

            
}




int main(int argc, char const *argv[])
{
	
	vector<long long> v = {10, 3, 5, 6, 2};
	vector<long long> ans = productExceptSelf(v,v.size());
	cout<<"ANSWER : ";
	for(int i : ans)
		cout<<i<<" ";

	cout<<endl;
	return 0;
}