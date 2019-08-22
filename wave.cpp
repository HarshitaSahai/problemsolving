
    
//check for even and odd places

#include<bits/stdc++.h>
using namespace std;



int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,i;
	    cin>>n;
	    
	    long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(i=0;i<n-1;i++)
	    {
	        if(i%2==0)
	        {
	            if(a[i]<a[i+1])
	            {
	                int temp;
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
	            }
	            
	        }
	        else if(a[i+1]<a[i])
	        {
	            int temp;
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
	        }
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}
