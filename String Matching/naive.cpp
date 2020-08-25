#include <bits/stdc++.h>
using namespace std;

void naive(string s,string p, int m , int n)
{
  
    for(int i = 0 ;i <= m - n ;  i++) // condition important  
    {
        
        int j;
        for( j = 0 ; j < n ; j++)
            if(s[i+j] != p[j])
                break;
    
        if(j == n)
            cout<<"Pattern match at: "<<i<<endl;
    }
}


int main() 
{
	string s,p;
	cin>>s>>p;
	int n = p.length(), m = s.length();
	naive(s,p,m,n);
	return 0;
}
