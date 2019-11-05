{
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/* The function should return the index of any
   peak element present in the array */
// arr: input array
// n: size of array
int peakElement(int a[], int n)
{  int j;
   int max=-1;
   for(int i=0;i<n;i++){
       if(max<a[i])
       {max=a[i];j=i;}
   }
   return j;
}
