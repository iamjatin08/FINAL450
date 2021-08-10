#include<bits/stdc++.h>
using namespace std;

bool ans(vector<int> arr1, int target){
        int start = 0 ;
        int end = arr1.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr1[mid]==target) return true;
            else if(arr1[mid]>target) end = mid - 1;
            else start = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size();
        int n = arr[0].size();
        int start = 0 , end = m-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(arr[mid][0]<=target and arr[mid][n-1]>=target){
                return ans(arr[mid],target);
            }
            else if(arr[mid][0]>target) end = mid - 1;
            else start = mid + 1;
        }
        return false;
    }


int main(int argc, char const *argv[])
{
    int r,c;
    cout<<"rows : ";
    cin>>r;
    cout<<"col : ";
    cin>>c;
    cout<<"ENTER ELEMENTS  "<<endl;
    cout<<endl;
    vector<vector<int>> arr;
    for(int i  = 0 ; i<r ; i++){
        cout<<"ROW "<<"i"<<" ELEMENTS : ";
        vector<int> v;
        for(int j = 0 ; j<c ; j++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        arr.push_back(v);

    }
    int target;
    cout<<"TARGET : ";
    cin>>target;
    cout<<endl;
    if(searchMatrix(arr,target)){
        cout<<"FOUND"<<endl;
    }
    else cout<<"NOT FOUND"<<endl;
    return 0;
}