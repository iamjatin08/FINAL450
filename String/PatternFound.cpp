#include <bits/stdc++.h>
using namespace std;

int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

bool search2D(vector<vector<char>> grid, int row, int col,string word, int R, int C)
{
	if (grid[row][col] != word[0])
		return false;

	int len = word.length();

	for (int dir = 0; dir < 8; dir++) {
		int k, rd = row + x[dir], cd = col + y[dir];

		for (k = 1; k < len; k++) {
			if (rd >= R || rd < 0 || cd >= C || cd < 0)
				break;

			if (grid[rd][cd] != word[k])
				break;

			rd += x[dir], cd += y[dir];
		}

		if (k == len)
			return true;
	}
	return false;
}

vector<vector<int>> searchWord(vector<vector<char>> grid, string word){
	int R = grid.size();
	int C = grid[0].size();
	vector<vector<int>> answer;
	for (int row = 0; row < R; row++){
		for (int col = 0; col < C; col++){
			if (search2D(grid, row, col, word, R, C)){
				vector<int> t = {row,col};
				answer.push_back(t);
			}
		}
	}
	return answer;
}

int main()
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

	vector<vector<int>>  answer = searchWord(board,s);
	for(vector<int> i : answer){
		for(int j : i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
