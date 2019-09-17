#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string st;
    while(t--)
    {
        cin>>st;
        string ch=st.substr(1)+st;
        
        int n=st.length();
        int m=ch.find(st)+1;
        if(n-m)
            cout<<"True\n";
        else
            cout<<"False\n";
    }
	
	return 0;
}
