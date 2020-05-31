#include<bits/stdc++.h>
using namespace std;

void rstring(string s,int len , int i)
{
  
    if(i == len )
        cout<<"Reverse of the string "<<" : ";
    else
    {
        char c = s[i];
        rstring(s,len,i+1); // creating a stack from start index to end index and then pop the character
        cout<<c;
    }    
}
int main()
{
    rstring("abc",3,0);
    return 0;
}
