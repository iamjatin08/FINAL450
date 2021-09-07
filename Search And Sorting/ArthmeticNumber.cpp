#include<iostream>
using namespace std;

bool check(int a , int b , int c){
 	if(c == 0){
        if(a==b) return 1;
        else return false;
    }
    else{
        if(((b-a)/c) < 0) 
        	return false;
        else
            return ((b-a)%c) == 0;
    }
}


int main(int argc, char const *argv[])
{
	int a,b,c;
	cout<<"A , B , C : ";
	cin>>a>>b>>c;
	if(check(a,b,c))
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	return 0;
}