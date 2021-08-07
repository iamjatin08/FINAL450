#include<bits/stdc++.h>
using namespace std;



int MakePalindrome(vector<int> number){
	int n = number.size();
	int i = 0 , j = n-1 , ans = 0;

	while(i<=j){
		if(number[i]==number[j]){
		
			i++;
			j--;
		}
		else if(number[i]<number[j]){
			i++;
			number[i]+=number[i-1];
			ans++;
		}
		else{
			j--;
			number[j]+=number[j-1];
			ans++;
		}
	}

	return ans;
}







int main(int argc, char const *argv[])
{
	int size;
	cout<<"SIZE : ";
	cin>>size;
	vector<int> number;
	cout<<"ENTER NUMBER : ";
	for(int i = 0 ; i<size ; i++)
	{
		int t;
		cin>>t;
		number.push_back(t);
	}

	cout<<endl;
	int ans = MakePalindrome(number);
	cout<<"NUMBER OF OPERARIONS REQUIRED : "<<ans<<endl;
	
	return 0;
}