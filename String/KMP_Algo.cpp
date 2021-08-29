#include<bits/stdc++.h>
using namespace std;

int  computeLPSArray(string s)
{

  int * lps = new int[s.size()];
  	int len = 0;
   lps[0] = 0 ;
    int i = 1;
    while (i < s.size()) {
        if (s[i] == s[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else 
        {
            
            if (len != 0) {
                len = lps[len - 1];
            }
            else 
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    int ans = 0;
    int temp = 0;
    for(int i = 0 ; i<s.size(); i++){
    	if(lps[i]){
    		temp++;
    		ans = max(temp,ans);
    	}
    	else temp = 0;
    }
    delete [] lps;
    return ans;
}




int main(int argc, char const *argv[])
{
	
	return 0;
}