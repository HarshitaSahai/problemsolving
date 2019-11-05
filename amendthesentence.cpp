#include<bits/stdc++.h>
#define TC int t; cin >> t; while(t--)
//#define STRING string str; cin.getline(str,2001);
//#define INP(a,n) int n; cin >>n ; int a[n];for (int i=0;i<n;i++) cin >> a[i]
using namespace std;
int main()
 {
	//code
	//string str;
  TC
    {
        string str;
        cin>>str;
        string k;
        if(str[0]>='A' && str[0]<='Z')
        str[0]=str[0]+32;
        k=str[0];
        for(int i=1;i<str.length();i++)
           {
               if(str[i]>='A' && str[i]<='Z')
                  {k+=" ";
                  str[i]=str[i]+32;
                  k+=str[i];
                      
                  }
                else
                   k+=str[i];
                  
           }
           cout<<k<<endl;
     }

     return 0;
 }
