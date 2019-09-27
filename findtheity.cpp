#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

/*#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>*/




char first(string &str)
{

      unordered_set<char> h; 
  
    // Traverse the input array from left to right 
    		for (int i=0; i<str.length(); i++) 
    
            { 
                char c = str[i]; 
          
                // If element is already in hash set, update x 
                // and then break 
                if (h.find(c) != h.end()) 
                 
                     return c; 
                  
                else // Else add element to hash set 
                    h.insert(c); 
            } 
            return '\0';
}

int main()
{
  int t;
  cin>>t;
   while(t--)
   {
             
             string str ;
			 cin>>str;
             cout<<first(str);
             cout<<"\n";
    }        
     
    return 0;
}
