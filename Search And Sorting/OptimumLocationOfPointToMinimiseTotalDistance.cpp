#include<bits/stdc++.h>
using namespace std;
class Line
{
  
public:
 
   int x;
   int y;
   int c;
};

double distance(double x1, double y1 , double x2 , double y2){
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))*(1.0000);
}


double MinDistace(vector<vector<int>> points, Line L){
	double i =  -1e6;
	double min_distance = 100.0000;
	for(;i<1e6 ; i+=0.0001){
		int x1 = i;
		int y1 = -(L.c + (L.x)*x1);
		double dis = 0.0000;
		for(int j = 0 ; j<points.size() ; j++){
			double x2 = points[j][0] * (1.0000);
			double y2 = points[j][1] * (1.0000);
			dis+=distance(x1,y1,x2,y2);
			cout<<dis<<endl;
		}
		if(dis<min_distance){
			min_distance = dis;
			continue;
		}
		else break;
	}

	return min_distance;

}


int main(int argc, char const *argv[])
{
	Line L;
	L.x = 1;
	L.y = -1;
	L.c = -3;
	// cout<<"X Of Line: ";
	// cin>>L.x;
	// cout<<"Y Of Line: ";
	// cin>>L.y;
	// cout<<"C Of Line: ";
	// cin>>L.c;

	// int Num;
	// cout<<"NUMBER OF POINTS : ";
	// cin>>Num;
	vector<vector<int>> points = {
        { -3, -2 }, { -1, 0 }, { -1, 2 }, { 1, 2 }, { 3, 4 }
    };
	// for(int i = 0 ; i<Num ; i++){
	// 	cout<<"X AND Y Of Point : ";
	// 	int x,y;
	// 	cin>>x>>y;
	// 	vector<int> v = {x,y};
	// 	points.push_back(v);
	// } 

	cout<<"ANSWER : "<<MinDistace(points,L)<<endl;

	return 0;
}