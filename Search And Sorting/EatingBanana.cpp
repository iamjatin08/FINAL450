#include<bits/stdc++.h>
using namespace std;

bool check(int mid, vector<int> arr, int h){
    int count = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]<=mid) count++;
        else if(arr[i]>mid){
            count+=(arr[i]/mid);
            if(arr[i]%mid!=0) count++;
            continue;
        }
    }
    return count<=h;
}
int minEatingSpeed(vector<int> arr, int h) {
    int start = 1 , end = pow(10,9);        
    
    int ans;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(check(mid,arr,h)){
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
    cout<<"ENTER SIZE : ";
    cin>>n;
    vector<int> arr;
    for(int i = 0 ; i<n ; i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int h;
    cout<<"HOURS : ";
    cin>>h;
    cout<<"ANSWER : "<<minEatingSpeed(arr,h)<<endl;
    return 0;
}