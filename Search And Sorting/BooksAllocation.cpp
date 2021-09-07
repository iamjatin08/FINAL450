#include<bits/stdc++.h>
using namespace std;

bool isFeasible(vector<int> books, int k , int res){
	int student = 1 , sum =  0;
	for(int i = 0 ; i<books.size() ; i++){
		if((sum + books[i]) > res){
			student++;
			cout<<"STUDENT : "<<student<<endl;
			sum = books[i];
		}
		else{
			sum += books[i];
			cout<<"SUM : "<<sum<<endl; 
		}
	}
	return student <= k;
}


int minPages(vector<int> books , int k){
	int start  = books[0] , end = 0;
	for(int i = 0 ; i<books.size() ; i++){
		start = max(start,books[i]);
		end += books[i];
	}
	int ans = 0 ;
	while(start<=end){
		cout<<"LOOP ENTERED"<<endl;
		int mid = (start + end) / 2;
		cout<<"MID : "<<mid<<endl;
		if(isFeasible(books,k,mid)){
			ans = mid;
			cout<<ans<<endl;
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
	cout<<"ANSWER : "<<minPages(books,students)<<endl;

	return 0;
}