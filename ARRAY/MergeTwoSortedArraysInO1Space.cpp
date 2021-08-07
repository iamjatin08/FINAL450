#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>& arr1, vector<int>& arr2)
{
	int m = arr1.size() , n =  arr2.size();
    for (int i = 0; i < m; i++)
    {
        
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            int first = arr2[0];
            int k;
            for (k = 1; k < n && arr2[k] < first; k++) {
                arr2[k - 1] = arr2[k];
            }
 
            arr2[k - 1] = first;
        }
    }
}









int main(int argc, char const *argv[])
{
	int size1 ;
	cout<<"SIZE OF ARRAY 1 : ";
	cin>>size1;
	std::vector<int> arr1;
	cout<<"ENTER ARRAY 1 ELEMENTS : ";
	for(int i = 0 ;  i<size1 ; i++){
		int t;
		cin>>t;
		arr1.push_back(t);
	}

	int size2;
	cout<<"ENTER SIZE OF ARRAY 2 : ";
	cin>>size2;
	cout<<"ENTER ARRAY 2 ELEMENTS : ";

	vector<int> arr2;
	for(int i = 0 ;  i<size2 ; i++){
		int t;
		cin>>t;
		arr2.push_back(t);
	}

	Merge(arr1, arr2);

	for(int i = 0 ; i<size1 ; i++)
		cout<<arr1[i]<<" ";
	for(int i = 0 ; i<size2 ; i++)
		cout<<arr2[i]<<" ";

	cout<<endl;



	return 0;
}