#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[100][10000];
int find(int arr[],int sum,int n){
    if(n<=0&&sum!=0){
        return 0;
    }
    if(sum<0){
        return 0;
    }
    if(sum==0){
        return 1;
    }
    if(dp[n-1][sum]!=-1){
        return dp[n-1][sum];
    }
    int  ans=(find(arr,sum-arr[n-1],n-1)||find(arr,sum,n-1));
    dp[n-1][sum]=ans;
    return ans;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    //int dp[n+1][sum+1];
	    memset(dp,-1,sizeof(dp));
	    if(sum%2!=0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        
	        int value=find(arr,sum/2,n);
	        if(value==0){
	            cout<<"NO"<<endl;
	        }
	        else{
	            cout<<"YES"<<endl;
	    }
	}
	}
}
