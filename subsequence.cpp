#include<iostream>
#include<string>
using namespace std;
string Helper(string &s){
    int n=s.length();
    int i=0;
    while(i<n){
        if(i+2<n && s.substr(i,3)=="RYY") i+=3;
        else if(i+1<n && s.substr(i,2)=="RY") i+=2;
        else if(s[i]=='R') i++;
        else return "NO";
    }
    return "YES";
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<Helper(s)<<endl;
	}
	return 0;
}
