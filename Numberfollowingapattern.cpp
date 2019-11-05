#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.length();
	    
	    stack <int> st;
	    int num=1;
	    for(int i=0; i<=s.length()+1; i++)
	    {
	        st.push(num++);
	        if(s[i]=='I' || i==s.length())
	        {
	            while(!st.empty())
	            {
	                cout<<st.top();
	                st.pop();
	            }
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}
