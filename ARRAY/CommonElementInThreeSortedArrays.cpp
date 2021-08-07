#include<bits/stdc++.h>
using namespace std;


vector<int> commonElements (vector<int> A, vector<int> B , vector<int> C){
            int n1 = A.size() , n2 = B.size() , n3 = C.size();
            vector<int> answer;
            unordered_map<int,int> mp;
            unordered_map<int,int> mp2; 
            for(int i = 0 ; i<n1 ; i++)
                mp[A[i]]=1;
            for(int j = 0 ;j<n2; j++){
                if(mp[B[j]]>0){
                    mp2[B[j]]=1;
                    mp[B[j]]= 0;
                    continue;
                }
            }
            for(int k = 0 ; k<n3 ; k++){
                if(mp2[C[k]]>0){
                    answer.push_back(C[k]);
                    mp2[C[k]] = 0;
                }
            }   
            
            return answer;
        
            
        }



int main(int argc, char const *argv[])
{
	int n1,n2,n3;
	cout<<"1st ARRAY SIZE : ";
	cin>>n1;
	cout<<"1st ARRAY ELEMENTS : ";
	vector<int> A,B,C;
	for(int i =  0 ; i<n1 ; i++){
		int t;
		cin>>t;
		A.push_back(t);
	}

	cout<<"2nd ARRAY SIZE : ";
	cin>>n2;
	cout<<"2nd ARRAY ELEMENTS : ";

	for(int i =  0 ; i<n2 ; i++){
		int t;
		cin>>t;
		A.push_back(t);
	}

	cout<<"3rd ARRAY SIZE : ";
	cin>>n3;
	cout<<"3rd ARRAY ELEMENTS : ";

		for(int i =  0 ; i<n3 ; i++){
		int t;
		cin>>t;
		A.push_back(t);
	}


	cout<<endl;
	cout<<"COMMON ELEMENTS : ";
	vector<int> ans = commonElements(A,B,C);
	for(int i = 0 ; i<ans.size() ; i++)
		cout<<ans[i]<<" ";
	cout<<endl;


	return 0;
}
