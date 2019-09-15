#include<iostream>
#include<algorithm>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string url="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	    int n,i=0;
	    char res[100];
	    cin>>n;
	    int n_copy=n;
	    while(n){
	        int rem=n%62;
	        res[i++]=url[rem];
	        n/=62;
	    }
        for(int j=i-1;j>=0;j--){
            cout<<res[j];
        }
        cout<<endl<<n_copy<<endl;
    	    
	    
	}
	return 0;
}
