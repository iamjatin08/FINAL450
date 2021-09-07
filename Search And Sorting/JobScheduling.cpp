#include<bits/stdc++.h>
using namespace std;

class job{
public:
	int start;
	int end;
	int profit;
	
};

bool compare(job j1 , job j2){
	return j1.start<j2.start;
}

void print(job j){
	cout<<j.start<<" "<<j.end<<" "<<j.profit<<endl;
}

int MaxProfit(vector<job>arr, int i = 0 , int lastEnd = -1){
	if(i == arr.size()) return 0;
	int opt1 = MaxProfit(arr,i+1,lastEnd);
	int opt2 = 0;
	
	if(arr[i].start>=lastEnd){
		opt2 = MaxProfit(arr,i+1,arr[i].end) + arr[i].profit;
	}
	
	return max(opt1,opt2);
}



int main(int argc, char const *argv[])
{
	int n;
	cout<<"NUMBER OF JOBS : ";
	cin>>n;
	vector<job> arr;
	for(int i = 0 ; i<n ; i++){
		cout<<"JOB "<<(i+1)<<" : ";
		int s,e,p;
		cin>>s>>e>>p;
		job j;
		j.start  = s;
		j.end    = e;
		j.profit = p;
		arr.push_back(j);
	}
	sort(arr.begin(),arr.end(),compare);
	int * dp = new int[arr.size()];
	
	for(job j : arr){
		print(j);
	}

	cout<<"MAX PROFIT : "<<MaxProfit(arr)<<endl;
	return 0;
}