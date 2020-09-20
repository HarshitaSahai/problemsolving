#include<bits/stdc++.h>
using namespace std;

int lps(string str2,int n)
{
     string str1 = str2;
    reverse(str2.begin(), str2.end());
    
    
    
    int dp[n+1][n+1];
    
    for(int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    
    for(int j = 0; j <= n; j++)
    {
        dp[0][j] = 0;
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(str1[i-1] == str2[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[n][n];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.length();
	    cout<<lps(s,n)<<endl;
	}
	
	return 0;
}
