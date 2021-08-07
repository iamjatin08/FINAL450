#include<bits/stdc++.h>
using namespace std;

double Median(vector<int> a, vector<int> b){
	int low = 0;
	int high = a.size();
	int te = a.size() + b.size();

	while(low<=high){
		int aleft = (low + high)/2;
		int bleft = (te+1)/2 - aleft;

		//valid segregation
		if(a[aleft-1]<=b[bleft] and b[bleft-1] <= a[aleft]){

			double Median = 0.0;


			if(te%2==0){
				int lmax = max(a[aleft-1],b[bleft-1]);
				int rmin = min(a[aleft],b[bleft]);
				Median = (lmax+rmin)/2.0;
			}
			else{
				int lmax = max(a[aleft-1],b[bleft-1]);
				Median = lmax;
			}
			return Median;

		}
		else if(a[aleft-1]>b[aleft]){
			// there are more elements to be picked in left part 'b' array
			high = aleft -1;
		}
		else if(b[bleft-1] > a[aleft]){
			// there are more element to be picked in left part from 'a' array
			low = aleft+1;
		}
	
	}
	return 0;
}



int main(int argc, char const *argv[])
{
	int n;
	cout<<"ENTER ARRAY 1 SIZE : ";
	cin>>n;
	vector<int> v1,v2;
	cout<<"ARRAY 1 DATA : ";
	for(int i = 0 ; i<n ; i++){
		int t ;
		cin>>t;
		v1.push_back(t);
	}
	int m;
	cout<<"ENTER ARRAY 2 SIZE : ";
	cin>>m;
	cout<<"ARRAY 2 DATA : ";
	for(int i = 0 ; i<m ; i++){
		int t ;
		cin>>t;
		v2.push_back(t);
	}

	cout<<"MEDIAN  IS "<<Median(v1,v2)<<endl;

	return 0;
}