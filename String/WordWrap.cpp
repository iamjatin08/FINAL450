#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int solve(vector<int> words, int k){
	int n = words.size();
    int extras[n+1][n+1];
 	int lc[n+1][n+1];
	int c[n+1];
    int i, j; 
    for (i = 1; i <= n; i++)
    {
        extras[i][i] = k - words[i-1];
        for (j = i+1; j <= n; j++)
            extras[i][j] = extras[i][j-1] - words[j-1] - 1;
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            if (extras[i][j] < 0)
                lc[i][j] = INF;
            else if (j == n && extras[i][j] >= 0)
                lc[i][j] = 0;
            else
                lc[i][j] = extras[i][j]*extras[i][j];
        }
    }   
    c[0] = 0;
    for (j = 1; j <= n; j++)
    {
        c[j] = INF;
        for (i = 1; i <= j; i++)
        {
            if (c[i-1] != INF && lc[i][j] != INF &&
                           (c[i-1] + lc[i][j] < c[j]))
            {
                c[j] = c[i-1] + lc[i][j];
                
            }
        }
    }
    return c[n];
}


 


int main(int argc, char const *argv[])
{
	vector<int> words = {3,2,2,5};
	cout<<"ANSWER : "<<solve(words,6)<<endl;
	return 0;
}