#include<bits/stdc++.h> 
using namespace  std;

int answer(int n){
	long long ans = pow(24,n) - (9*pow(8,n)-9*pow(2,n)-18*pow(3,n)+24);
	long long mod = pow(10,9)+7;
	return (int)(ans%mod);
}




int main(int argc, char const *argv[])
{
	
	int n = 4;
	cout<<answer(n)<<endl;
}