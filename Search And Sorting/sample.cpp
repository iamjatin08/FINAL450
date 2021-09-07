#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n, int k , int res){
	int student = 1 , sum =  0;
	for(int i = 0 ; i<n ; i++){
		if((sum + arr[i]) > res){
			student++;
			sum = arr[i];
		}
		else{
			sum += arr[i];
		}
	}
	return student <= k;
}


 long long minTime(int arr[], int n, int k)
{
    int start  = arr[0] , end = 0;
	for(int i = 0 ; i<n ; i++){
		start = max(start,arr[i]);
		end += arr[i];
	}
	long long ans = 0 ;
	while(start<=end){
		
		int mid = start + (end - start)/ 2;
		
		if(check(arr,n,k,mid)){
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
	cout<<"NUMBER OF BOOKS : ";
	cin>>n;
	vector<int> books;
	cout<<"BOOKS PAGES : ";
	for(int i = 0 ; i<n ; i++){
		int t;
		cin>>t;
		books.push_back(t);
	}
	int students ;
	cout<<"NUMBER OF STUDENTS : ";
	cin>>students;
	// cout<<"ANSWER : "<<minPages(,students)<<endl;

	return 0;
}