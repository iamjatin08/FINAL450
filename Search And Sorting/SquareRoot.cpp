#include<bits/stdc++.h>
using namespace std;

int SquareRoot(int n){
	int i = 0;
	for(;(i*i)<=n ; i++);
	return i-1;
}




int main(int argc, char const *argv[])
{
	int n = 144;
	cout<<"SQUARE ROOT : "<<SquareRoot(n)<<endl;
	return 0;
}