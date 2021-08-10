#include<bits/stdc++.h>
using namespace std;


void rotate(vector<vector<int>>& arr) {
    int n = arr.size();
    int **dp = new int*[n];
    for(int i = 0 ; i<n ; i++) dp[i] = new int [n];
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<n ; j++) dp[j][i] = arr[i][j];
    }
    for(int i = 0 ; i<n ; i++){
        int start = 0;
        int end = n-1;
        while(start<=end){
            swap(dp[i][start],dp[i][end]);
            start++;
            end--;
        }
    }
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++) arr[i][j] = dp[i][j];
        delete [] dp[i];
    }
    delete  [] dp;
    
}




int main(int argc, char const *argv[])
{
    int n;
    cout<<"SIZE : ";
    cin>>n;
    cout<<"ENTER ELEMENTS  "<<endl;
    cout<<endl;
    vector<vector<int>> arr;
    for(int i  = 0 ; i<n ; i++){
        cout<<i<<"th ROW"<<" ELEMENTS : ";
        vector<int> v;
        for(int j = 0 ; j<n ; j++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        arr.push_back(v);

    }
    rotate(arr);

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}