#include<bits/stdc++.h>
using namespace std;


int SearchInRotated(int * A, int n, int target){

	 int lo=0,hi=n-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(A[mid]>A[hi]) lo=mid+1;
            else hi=mid;
        }
        int rot=lo;
        lo=0;hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int realmid=(mid+rot)%n;
            if(A[realmid]==target)return realmid;
            if(A[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;

}


int main(int argc, char const *argv[])
{
	int arr[] = {4,5,1,2,3};
	int n = sizeof(arr)/sizeof(int);
	int  target = 3;

	cout<<SearchInRotated(arr,n,target)<<endl;
	return 0;
}