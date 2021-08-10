#include<bits/stdc++.h>
using namespace std;
void sortedMatrix( vector<vector<int>>& arr) {
        // code here
        vector<int> v;
        int n = arr.size();
        int m = arr[0].size();
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                v.push_back(arr[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int k = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                arr[i][j] = v[k++];    
            
            }
        }
        // return arr;
        
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
        cout<<i<<"th ROW"<<" ELEMENTS : ";
        vector<int> v;
        for(int j = 0 ; j<c ; j++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        arr.push_back(v);

    }
    sortedMatrix(arr);

    cout<<endl;
    for(int i = 0 ; i<r ; i++){
        for(int j =  0 ; j<c; j++) 
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;

    return 0;
}