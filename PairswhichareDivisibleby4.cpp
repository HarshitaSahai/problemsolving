#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            int main=a[i];
            for(int j=i+1;j<n;j++)
            {
                int comp=main+a[j];
                if(comp%4==0)
                    count++;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}
//Execution Time:0.01
