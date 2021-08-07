#include<bits/stdc++.h>
using namespace std;

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] < v2[0];
}


vector<vector<int>> MergeIntervals(vector<vector<int>>& input){
	sort(input.begin(),input.end(),sortcol);

	vector<vector<int>> output;
	for(int i = 0 ; i<input.size() ; i++){
		if(output.size()==0){
			output.push_back(input[i]);
		}
		else{
			vector<int>& previousInterval = output[output.size()-1];

			if(previousInterval[1]>input[i][0]){
				previousInterval[1] = max(previousInterval[1],input[i][1]);
			}
			else{
				output.push_back(input[i]);
			}

		}
	}
	return output;

}




int main(int argc, char const *argv[])
{


	int intervals;
	cout<<"NUMBER OF INTERVALS : ";
	cin>>intervals;
	cout<<endl;

	vector<vector<int>> input;
	 for(int i  = 0 ; i<intervals ; i++){
	 	cout<<i<<"th INTERVAL : ";
	 	int sp;
	 	cin>>sp;
	 	
	 	int ep;
	 	cin>>ep;
	 	vector<int> t;
	 	t.push_back(sp);
	 	t.push_back(ep);
	 	input.push_back(t);
	}


	vector<vector<int>> output = MergeIntervals(input);
	cout<<endl;
	cout<<endl;
	
	for(int i = 0 ;  i<output.size() ; i++){
		cout<<i<<"th INTERVAL : ";
		cout<<output[i][0]<<" "<<output[i][1]<<endl;
		

	}




	// // int ar[3][3] = {{2,4,2},{23,4,1},{-1,3,1}};
	// // qsort(ar, 3, sizeof(*ar),
 // //        [](const void *arg1, const void *arg2)->int
 // //        {
 // //            int const *lhs = static_cast<int const*>(arg1);
 // //            int const *rhs = static_cast<int const*>(arg2);
 // //            return (lhs[0] < rhs[0]) ? -1
 // //                :  ((rhs[0] < lhs[0]) ? 1
 // //                :  (lhs[1] < rhs[1] ? -1
 // //                :  ((rhs[1] < lhs[1] ? 1 : 0))));
 // //        });
	// for(int i = 0 ; i<3; i++){
	// 	for(int j = 0 ; j<3 ; j++)
	// 		cout<<ar[i][j]<<" ";
	// 	cout<<endl;
	// }
	return 0;
}