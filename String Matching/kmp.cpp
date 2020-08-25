#include <bits/stdc++.h>
using namespace std;

void compLPS(string p,int n, int *lps)
{
    int len = 0 ;
    lps[0] = 0;
    int i = 1;
    while( i < n)
    {
        if(p[i] == p[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len != 0 ) // This is done to check if current pattern matches any prev pattern 
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void kmp(string s,string p,int m,int n)
{
    int lps[n];
    compLPS(p,n,lps);
    int i = 0 , j = 0 ;
    while( i < m)
    {
        if(p[j] == s[i])
        {
            j++;
            i++;
        }
        if(j == n)
        {
            cout<<"Pattern match "<<i - j;
            j = lps[j - 1];
            
        }
        else
        {
            if(i < m  && p[j] != s[i])
            {
                if(j != 0)
                {
                    j = lps[j-1];   
                }
                else
                {
                    i = i + 1;
                }
            }
        }
    }
    
}



int main() 
{
	string s,p;
	cin>>s>>p;
	int n = p.length(), m = s.length();
    kmp(s,p,m,n);
	return 0;
}
