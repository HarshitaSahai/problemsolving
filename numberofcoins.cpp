#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int v,n;
	    cin>>v;
	    cin>>n;
	    long long int coin[n];
	    for(long long int i=0;i<n;i++ ) cin>>coin[i];
	    int dp[v+1];
	    dp[0]=0;
	    for(int i=1;i<=v;i++) dp[i]=v+1;
	    for(int i = 0; i < n; i++)
	    {
            for(int j = coin[i]; j < v+1; j++)
            {
                if(dp[j-coin[i]] != v+1 && dp[j] > dp[j-coin[i]]+1) dp[j] = dp[j-coin[i]] + 1;
            }
        }
        
        if(dp[v] == v+1) 
            cout << -1 << endl;
        else 
            cout << dp[v] << endl;
        
	}
	return 0;
}
