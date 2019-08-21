#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() 
{
      int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
          vector <int> v;
          for(int i=2;i<n;i++)
          {
              if(prime(i))
              {
                  v.push_back(i);
              }
          }
          int l=0,r=v.size()-1;
          int f=0;
          while(l<=r)
          {
              int s=v[l]+v[r];
              if(s<n)
                l++;
              else if(s>n)
                 r--;
                 else
                 {
                     f=1;
                     if(l==r)
                     {
                         cout<<v[l]<<" "<<v[l];
                     }
                     else
                     cout<<v[l]<<" "<<v[r];break;
                 }
          }
          if(!f)cout<<"-1";
          cout<<endl;
      }
	return 0;
}
