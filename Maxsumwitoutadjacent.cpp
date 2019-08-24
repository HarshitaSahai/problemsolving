#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for( int i = 0; i < n; i++ )
            cin >> a[i];
        int dp[n];
        if( n == 1 ){
            cout << a[0] << endl;
            continue;
        }
        if( n == 2 ){
            cout << max(a[0],a[1]) << endl;
            continue;
        }
        dp[0] = a[0];
        dp[1] = max(a[0],a[1]);
        for( int i = 2; i < n; i++ ){
            dp[i] = max(dp[i-1], (a[i]+dp[i-2]));
        }
        // for( int i = 0; i < n; i++ )
        //     cout << dp[i] << " ";
        cout << dp[n-1] << endl;
    }
}
