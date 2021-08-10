#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &arr){
        // code here
        int min = 0, max = 2000;
        int r = arr.size();
        int c = arr[0].size();
    for (int i=0; i<r; i++)
    {
        if (arr[i][0] < min)
            min = arr[i][0];
 
        if (arr[i][c-1] > max)
            max = arr[i][c-1];
    }
 
    int desired = (r * c + 1) / 2;
    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int place = 0;
 
        for (int i = 0; i < r; ++i)
            place += upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin();
        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
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
    cout<<endl;
    cout<<"MEDIAN : "<<median(arr)<<endl;
    return 0;
}