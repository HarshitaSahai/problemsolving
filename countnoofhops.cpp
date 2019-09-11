#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n;
    cin>>n;
    int ans[n+1];
    ans[0]=1;
    for(int i=1;i<n+1;i++){
        int k=i-1<0?0:ans[i-1];
        int l=i-2<0?0:ans[i-2];
        int m=i-3<0?0:ans[i-3];
        ans[i]=k+l+m;
    }
    cout<<ans[n]<<endl;
}
}
