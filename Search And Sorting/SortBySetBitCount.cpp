#include<bits/stdc++.h>
using namespace std;

class triplet{
public:
	int num;
	int binary;
	int index;

};

int decToBinary(int n)
{
   
    int binaryNum[32];
 
    int i = 0;
    while (n > 0) {
 
        
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
 	int ans = 0;
    for (int j = i - 1; j >= 0; j--){

        if(binaryNum[j] == 1){
        	ans++;
        }
    }
    return ans;
}

bool compare(triplet t1, triplet t2){
	if(t1.binary == t2.binary){
		return t1.index<t2.index;
		}
		return t1.binary > t2.binary;
}

vector<int> SortBySetCount(vector<int> arr){
	
	vector<triplet> v;
	for(int i = 0 ; i<arr.size() ; i++){
		int n = decToBinary(arr[i]);
		triplet t;
		t.num = arr[i];
		t.binary = n;
		t.index = i;
		v.push_back(t);
	}
	sort(v.begin(), v.end(),compare);

	vector<int> ans;
	for(triplet t : v){
		ans.push_back(t.num);
	}
	return ans;
}





int main(int argc, char const *argv[])
{
	vector<int> arr = {10,3,4,1,2,4,7};
	vector<int> ans = SortBySetCount(arr);
	for(int i : ans){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}