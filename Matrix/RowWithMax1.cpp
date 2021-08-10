#include<bits/stdc++.h>
using namespace std;


int RowWithMax1(vector<vector<int>> arr){
-
	int n = arr[0].size();
	int ans = -1 , row = -1;

	for(int i = 0 ; i<m ; i++){
		int temp = 0;
		for(int j = 0 ; j<n ; j++){
			if(arr[i][j]==1) temp++;
		}
		if(ans<temp){
			row  = i;
			ans = temp;
		}
	}
	return row;


}







int main(int argc, char const *argv[])
{
	int r,c;
    cout<<"rows : ";
    cin>>r;
    cout<<"col : ";
    cin>>c;
    cout<<"ENTER ELEMENTS  "<<endl;
    cout<<endl;-
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

    cout<<endl;
    cout<<RowWithMax1(arr)<<"th ROW HAS MAX 1 "<<endl;
	return 0;
}