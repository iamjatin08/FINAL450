#include<bits/stdc++.h>
using namespace std;

bool existHelper(vector<vector<char>> &board , string word, int i , int j){
	if(word.size()==0) return true;
	if(i>=board.size() or i<0 or j>=board[0].size() or j<0) return false;

	if(word[0] == board[i][j]){
		bool ans = false;
		char ch = board[i][j];
		board[i][j] = '*';
		ans = ans || existHelper(board,word.substr(1),i+1,j);
		if(ans) return ans;
		ans = ans || existHelper(board,word.substr(1),i,j+1);
		if(ans) return ans;
		ans = ans || existHelper(board,word.substr(1),i-1,j);
		if(ans) return ans;
		ans = ans || existHelper(board,word.substr(1),i,j-1);
		board[i][j] = ch;
		return ans;
	}
	return false;
}

bool exist(vector<vector<char>>& board, string word) {
	for(int i = 0 ; i<board.size(); i++){
		for(int j = 0 ; j<board[0].size() ; j++){
			if(board[i][j] == word[0]){
				if(existHelper(board,word,i,j)){
					return true;
				}
			}
		}
	}
	return false;        
}





int main(int argc, char const *argv[])
{
	
	int m , n ;
	cout<<"ROWS AND COLUMNS : ";
	cin>>m>>n;
	cout<<"ENTER DATA : "<<endl;
	vector<vector<char>> board;
	
	for(int i = 0 ; i<m ; i++){
		vector<char> temp;
		cout<<i<<"th Row : ";
		for(int j = 0 ; j<n ; j++){
			char t;
			cin>>t;
			temp.push_back(t);
		}
		board.push_back(temp);
	}
	string s;
	cout<<"STRING : ";
	cin>>s;


	if(exist(board,s))
		cout<<"FOUND"<<endl;
	else cout<<"NOT FOUND"<<endl;
	return 0;
}