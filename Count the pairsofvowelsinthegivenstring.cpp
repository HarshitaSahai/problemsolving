#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int countPairs(string s) 
{ 
    
    set<char> st; 
    st.insert('a'); 
    st.insert('e'); 
    st.insert('i'); 
    st.insert('o'); 
    st.insert('u'); 
  
    
    int count = 0; 
  
    int n = s.size(); 
  
    for (int i = 0; i < n - 1; i++) { 
  
        
        if (st.find(s[i]) != st.end() && st.find(s[i + 1]) != st.end()) 
            count++; 
    } 
  
    return count; 
} 
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string s;
         cin>>s;
         cout<<countPairs(s);
     }
	//code
	return 0;
}
