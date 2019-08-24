//replace
//remove
//insert

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int min(int x, int y, int z) 
{ 
   return min(min(x, y), z); 
} 
int editDist(string str1 , string str2 , int m ,int n,int dp[][5000]) 
{ 
    
    if (m == 0) return n; 
  
   
    if (n == 0) return m; 
  
 
    if (str1[m-1] == str2[n-1]) 
        return editDist(str1, str2, m-1, n-1,dp); 
  if(dp[m][n]!=0)
  return dp[m][n];
  else
  {
       dp[m][n]= 1 + min ( editDist(str1,  str2, m, n-1,dp),    
                     editDist(str1,  str2, m-1, n,dp), 
                     editDist(str1,  str2, m-1, n-1,dp)
                   ); 
      return dp[m][n];
  }
 
   
} 
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n;
	    cin>>m;
	    char a[n],b[m];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<m;i++)
	    cin>>b[i];
	    int dp[n+1][5000];
	    memset(dp,0,sizeof(dp));
	    dp[0][0]=1;
	    cout<<editDist(a,b,n,m,dp)<<endl;
	    
	    
	    
	}
	return 0;
}
