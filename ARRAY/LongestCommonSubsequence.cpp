#include<bits/stdc++.h>
using namespace std;



int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s;
      for(int i = 0 ; i<N;  i++){
          s.insert(arr[i]);
      }
      int ans = 1;
      for(int i = 0; i<N; i++){
          if(s.find(arr[i]-1)==s.end()){
              int j  = 1;
              int count = 1;
              for(;j<N;j++){
                  if(s.find(arr[i]+j)==s.end()) break;
                  count++;
              }
              if(ans<count) ans  = count;
          }
      }
      return ans;
    }







int main(int argc, char const *argv[])
{
	int N = 7 ,a[] = {2,6,1,9,4,5,3};
	cout<<"ANSWER : "<<findLongestConseqSubseq(a,N)<<endl;
	return 0;
}