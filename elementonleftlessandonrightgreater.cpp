#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    bool aux[n];
	    int max = arr[0];
	    aux[0] = false;
	    for(int i=1;i<n-1;i++)
	    {
	        if(max>arr[i])
	        {
	            aux[i] = false;
	        }
	        else
	        {
	            max = arr[i];
	            aux[i] = true;
	        }
	    }
	    int min = arr[n-1];
	    aux[n-1] = false;
	    int ans = -1;
	    for(int i=n-2;i>=1;i--)
	    {
	        if(aux[i]==true)
	        {
	            if(min<arr[i])
    	            aux[i]=false;
    	        else
    	            ans = arr[i];
	        }
	        if(min>arr[i]) min = arr[i];
	    }
        cout<<ans<<"\n";
	}
	return 0;
}
