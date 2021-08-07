#include<bits/stdc++.h>
using namespace std;



int MaxProfit(vector<int>& input){
	int n = input.size();

	int leftMin = input[0];
	int leftMaxProfit = 0;
	int * dpLeft = new int [n];
	dpLeft[0] = 0;
	for(int i =  1 ; i<n ; i++){
		if(input[i]<leftMin){
			leftMin = input[i];
		}
		leftMaxProfit = input[i] - leftMin;
		dpLeft[i] = max(dpLeft[i-1],leftMaxProfit);
	}

	int rightMax = input[n-1];
	int rightMaxProfit = 0;

	int * dpRight = new int[n];
	dpRight[n-1] = 0;
	for(int i = n-2 ; i>=0 ; i--){
		rightMax = max(rightMax,input[i]);
		rightMaxProfit = rightMax - input[i];
		dpRight[i] = max(rightMaxProfit,dpRight[i+1]);
	}

	int OverAllMax = 0;
	for(int i = 0 ; i<n ; i++){
		OverAllMax = max(dpLeft[i]+dpRight[i],OverAllMax);
	}
	delete [] dpLeft; 
	delete [] dpRight;
	return OverAllMax;
 
}







int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE OF ARRAY : ";
	cin>>size;
	cout<<"ENTER ELEMENTS : ";
	vector<int> input;
	for(int i = 0 ; i<size ; i++){
		int t;
		cin>>t;
		input.push_back(t);
	}
	cout<<"MAX PROFIT : "<<MaxProfit(input)<<endl;

	return 0;
}