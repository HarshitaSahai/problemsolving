
#include<bits/stdc++.h>
using namespace std;
void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
void reverse(char *str, int len)
{
    stack<char> s;
    for(int i=0; i<len; i++) s.push(str[i]);
    for(int i=0;i<len;i++) 
    {
        str[i]=s.top(); 
        s.pop();
    }
}
