#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,hash[256];
    string str;
    cin>>t;
    cin >> ws;
    while(t--)
    {
        memset(hash,0,sizeof(hash));
        std::getline(std::cin,str);
        cin >> ws;
        for(i=0;i<str.size();i++)
        {
            if(hash[str[i]]==0)
            {
                cout<<str[i];
                hash[str[i]]++;
            }
        }
        cout<<"\n";
    }
    return 0;
    
}
