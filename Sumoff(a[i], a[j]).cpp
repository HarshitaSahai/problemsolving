#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(abs(a[j]-a[i])>1){
	                sum += a[j]-a[i];
	            }
	            else{
	                sum +=0;
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
