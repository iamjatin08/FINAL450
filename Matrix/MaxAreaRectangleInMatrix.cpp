#include<bits/stdc++.h>
using namespace std;


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



int maxArea(int **arr, int n, int m) {
    // Your code here
    int * dp = new int [m];
    int i = 0;
    for(int j = 0 ; j<m ; j++) dp[j] = arr[i][j];
    int ans = MaxAreaInHistogramOptimised(dp,m);
    i++;
    while(i<n){
        for(int j = 0 ; j<m ; j++) {
            if(arr[i][j]==0) dp[j] = 0;
            else dp[j]+=1;
        }
        ans = max(ans,MaxAreaInHistogramOptimised(dp,m));
        i++;
        
    }
    return ans;

}


int main(int argc, char const *argv[])
{
	int r,c;
	cout<<"ROW : ";
	cin>>r;
	cout<<"COL : ";
	cin>>c;
	int **arr = new int*[r];
	for(int i = 0 ; i<r ; i++){
		arr[i] = new int[c];
		cout<<"ENTER "<<i<<"th ROW ELEMENTS : ";
		for(int j = 0 ; j<c ; j++){
			cin>>arr[i][j];
		}

	}

	cout<<endl;
	cout<<"MAX AREA RECTANGLE IS "<<maxArea(arr,r,c)<<endl;
	return 0;
}