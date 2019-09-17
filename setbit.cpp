#include<iostream>
using namespace std;
int setBits(int n){
    int count=0;
    while(n){
        count+=(n&1);
        n=n>>1;
    }
    return count;
}
int fastSetBits(int n){
    int count=0;
    while(n){
        count++;
        n=n&(n-1);
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
    cin>>n;
    cout<<fastSetBits(n)<<endl;
    }
   
    
    return 0;
}
