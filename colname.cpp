#include<iostream>
using namespace std;
#define ll long long

string title(ll n) {
    return n==0?"":title((n-1)/26)+(char)((n-1)%26+'A');
}

int main()
{
	//code
	ll t,n;
	cin>>t;
	while(t--) {
	    cin>>n;
	    cout<<title(n)<<endl;
	}
	return 0;
}
