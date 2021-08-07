#include<bits/stdc++.h>
using namespace std;

float Perimeter(float a, float b, float c){
	return a+b+c;
}


int main(int argc, char const *argv[])
{
	int x[3];
	int y[3];
	cout<<"enter coordinates"<<endl;
	for(int i = 0 ; i<3 ; i++){
		cout<<"X and Y : ";
		cin>>x[i]>>y[i];
		}
	float a,b,c;
	a = sqrt(pow((x[0]-x[1]),2)*(1.0)+pow((y[0]-y[1]),2)*(1.0));
	b = sqrt(pow((x[1]-x[2]),2)*(1.0)+pow((y[1]-y[2]),2)*(1.0));
	c = sqrt(pow((x[2]-x[0]),2)*(1.0)+pow((y[2]-y[0]),2)*(1.0));
	cout<<"PERIMETER  IS  : "<<Perimeter(a,b,c)<<endl;
	return 0;
}