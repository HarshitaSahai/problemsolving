#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	    string s1,s2;
	    cin >> s1 >> s2;
	    int arr[26]={0};
	    for(int i=0;i<s1.length();i++)
	        ++arr[s1[i]-97];
	    for(int i=0;i<s2.length();i++)
	        --arr[s2[i]-97];
	    int flag=0;
	    for(int i=0;i<26;i++){
	        if(arr[i]>0 || arr[i]<0){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	    
	}
	return 0;
}
