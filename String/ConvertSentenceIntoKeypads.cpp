#include<bits/stdc++.h>
using namespace std;


string input[] = {" ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

pair<int,int> find(char ch){
	for(int i = 1 ; i<9 ; i++){
		for(int j = 0 ; j<input[i].size() ; j++){
			if(ch == input[i][j]){
				pair<int,int> p = make_pair(i,j+1);
				return p;
			}
		}
	}
}

string output(string s){
	string  ans = "";
	for(int i = 0 ; i<s.size() ;i++){
		if(s[i]==' '){
			ans += "0";
		}
		else{
		pair<int,int> index = find(s[i]);
		char ch = index.first + '1';
		while(index.second--){
			ans+=ch;
		}
	}
	}
	return ans;
}


//ANOTHER APPROACH
string arr[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };


string printSequence(string input)
{
    string output = "";
 
   
    int n = input.length();
    for (int i=0; i<n; i++)
    {
      
        if (input[i] == ' ')
            output = output + "0";
 
        else
        {
            
            int position = input[i]-'A';
            output = output + arr[position];
        }
    }
 
  
    return output;
}


int main(int argc, char const *argv[])
{
	string s;
	cout<<"STRING : ";
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout<<"OUTPUT : "<<output(s)<<endl;
	cout<<"OUTPUT : "<<printSequence(s)<<endl;
	return 0;
}