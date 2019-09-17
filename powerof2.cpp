#include <iostream>
using namespace std;
/*void check(long long int n)
{
    long long int i,gcd=0;
    if(n==1)
        cout<<"YES";
    else
        {   for(i=1; i <= n ; ++i)
            {
                
                if(n%i==0 )
                    gcd = i;
            }
         
            if(gcd==2)
                cout<<"YES";
            else
                cout<<"NO";
        }        
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    check(n);
	    cout<<'\n';
	}
	return 0;
}*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int n,ans;
    cin>>n;
    if(n <= 0)
    cout<<"NO\n";
    else
    {
        ans = n&(n-1);
        if(ans==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    }
    return 0;
}
