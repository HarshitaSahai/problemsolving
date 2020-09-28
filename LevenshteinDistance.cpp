#include <iostream>
using namespace std;

int levenshteinDistance(string a, string b, int n , int m)
{
   int dp[n+1][m+1];
    int i=0,j=0 ;
    for(i =0 ; i <= n ; i++)
        dp[i][j] = i;
    for(i =0 ; i <= n ; i++)
        dp[j][i] = i;
    
    for(i = 0 ; i <= n ; i++)
    {
        for(j = 0 ; j <=m ; j++)
        {
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
        }
    }
    return dp[n][m];
    
}

int main()
{
	// your code goes here
	string a,b;
	cin>>a>>b;
	int n = a.length(), m = b.length();
	cout<<levenshteinDistance(a,b,n,m);
	
	return 0;
}
