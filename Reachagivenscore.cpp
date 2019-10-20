#include<bits/stdc++.h>
using namespace std;
int f(int a[],int n,int sum)
{
  if(sum==0)
  return 1;
  if(sum<=0 || n<=0)
  return 0;
  else
  {
      return f(a,n-1,sum)+f(a,n,sum-a[n-1]);
  }
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	   int a[]={3,5,10};
	   int n=3;
	   int sum;
	   cin>>sum;
	   cout<<f(a,n,sum)<<endl;
	   
	}
	
	return 0;
}
