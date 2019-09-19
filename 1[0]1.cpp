#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int n=s.length();
	    int flag=0;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(flag==1 && s[i]=='1')
	        {
	            flag=0;
	            ++cnt;
	            --i;
	        }
	        else if(s[i]=='1' && s[i+1]=='0')
	            flag=1;
	        else if(flag==1 && s[i]!='0')
	            flag=0;
	        
	    }
	    cout << cnt << endl;
	}
	return 0;
}
