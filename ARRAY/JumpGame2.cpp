#include<bits/stdc++.h>
using namespace std;

class Pair{
public:
	int i,s,j;
	string psf;

	Pair(int i, int s, int j, string psf){
		this->i = i ;
		this->s = s ;
		this->j = j;
		this->psf = psf;
	}

};


void jump(vector<int> input){

	int n = input.size();
	int * dp = new int[n];

	memset(dp,0,sizeof(dp));
	
	for(int i = n-2; i>=0 ; i--){
		int steps = input[i];

		int minANS = INT_MAX;
		for(int j = 1 ; j<=steps and i+j<n ;j++ ){
			if(dp[i+j]!=0 ) 
				minANS = min(minANS,dp[i+j]);
		}
		if(minANS != INT_MAX)
			dp[i] = minANS+1;
	}

	deque<Pair> ans ;

	ans.push_back(Pair(0,input[0],dp[0],0+""));
	while(ans.size()>0){
		Pair rem = ans.front();
		ans.pop_front();

		if(rem.j == 0){

			cout<<rem.psf<<endl;
		}
		for(int j = 1; j<= rem.s and rem.i+j<n  ; j++){
			if(dp[rem.i + j]!=0 and dp[rem.i + j]==rem.j-1){
				ans.push_back(Pair(rem.i + j , input[rem.i + j],dp[rem.i + j],rem.psf + "->" + to_string(rem.i + j) ));

			}
		}
	}


}







int main(int argc, char const *argv[])
{
	
	int size;
	cout<<"SIZE : ";
	cin>>size;
	cout<<"DATA : "; 
	vector<int> input;
	for(int i = 0 ; i<size;  i++){
		int t;
		cin>>t;
		input.push_back(t);
	}

	jump(input);

	return 0;
}