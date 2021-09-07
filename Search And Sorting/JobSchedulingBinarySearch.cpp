#include<bits/stdc++.h>
using namespace std;

class job{
public: 
 	int start;
 	int end;
 	int profit;
 	job(){

 	}
 	job(int s, int e, int p){
 		start = s;
 		end = e;
 		profit = p;
 	}
};

bool compare(job j1, job j2){
	return j1.end<j2.end;
}

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
   int n = startTime.size();
   vector<job> arr;
   for(int i = 0 ; i<n ; i++){
   	int s = startTime[i];
   	int e = endTime[i];
   	int p = profit[i];
   	job j(s,e,p);
   	arr.push_back(j);
   }
   sort(arr.begin(),arr.end(),compare);
   vector<int> dp(n);
   dp[0] = arr[0].profit;
   for(int i = 1 ; i<n ; i++){
   		int p = arr[i].profit;
   		int last = -1;
   		int start = 0 , end = i - 1;
   		while(start<=end){
   			int mid = start + (end - start)/2;
   			if(arr[mid].end <= arr[i].start){
   				last = mid;
   				start = mid + 1;
   			}
   			else{
   				end = mid - 1;
   			}
   		}
   		if(last != -1) p+=dp[end];
   		dp[i] = max(dp[i-1],p);

   }
   return dp[n-1];

}




int main(int argc, char const *argv[])
{
	vector<int> startTime , endTime , profit;
	startTime = {1,2,3,4,6};
	endTime = {3,5,10,6,9};
	profit = {20,20,100,70,60};
	cout<<"ANSWER : "<<jobScheduling(startTime,endTime,profit)<<endl;

	return 0;
}