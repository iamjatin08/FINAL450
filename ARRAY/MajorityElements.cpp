#include<bits/stdc++.h>
using namespace std;


  int majorityElement(vector<int>& nums) {
        int index = 0;
        int count = 1;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]==nums[index]) count++;
            else {
                count--;
                if(count==0){
                    index = i;
                    count = 1;
                }
            }
        }
        return nums[index];
    }

 vector<int> majorityElement2(vector<int>& nums, int k) {
        int freq = nums.size()/k;
        map<int,int> mp;
        for(int i = 0 ; i<nums.size() ; i++)
            mp[nums[i]]++;
        map<int,int>::iterator it;
        vector<int> ans;
        for(it = mp.begin() ; it!=mp.end() ; it++){
            if((*it).second>freq){
                ans.push_back((*it).first);
            }
        }
        return ans;
    }







int main(int argc, char const *argv[])
{
	vector<int> input =  {2,2,1,1,1,2,2};
	cout<<"MAJORITY ELEMENT 1 : "<<majorityElement(input)<<endl;
	int k = 3;
	cout<<"MAJORITY ELEMENT 2 : ";
	vector<int> ans = majorityElement2(input,k);
	for(int i = 0; i<ans.size() ; i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}