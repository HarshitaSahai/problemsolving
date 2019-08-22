#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    { int Max=0;
    int n,m;
         cin>>n>>m;                

        string s1,s2;
        cin>>s1>>s2;


        int dp[n+1][m+1];                         //one greater size to i=0,j=0 row and column with zeros
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])          //if letters match then add 1,as the count is increased of common substring
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    if(dp[i][j]>Max)
                      Max=dp[i][j];
                }
                else
                    dp[i][j]=0;
            }
        }
        cout<<Max;
        cout<<endl;
    }

}
