#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
//code
int T;
cin>>T;
  while(T--)
  {
    long N,k;
    cin>>N;
    priority_queue<long,vector<long>,greater<long> > heap;
    for(long i=0;i<N;i++)
    { 
      cin>>k;
      heap.push(k);
    }
    long count=0;
    while(heap.size()!=1)
    {
      long a=heap.top();
      heap.pop();
      long b=heap.top();
      heap.pop();
      count=count+a+b;
      heap.push(a+b);
    }
    cout<<count<<endl; 
  } 
return 0; }
