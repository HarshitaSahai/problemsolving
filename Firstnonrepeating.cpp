#include<iostream>
#include<queue>
using namespace std;

void firstNonRepeating(char s[], int n){
    queue<char>q;
    int charCount[26] = {0};
    
    for(int i=0; i<n; i++){
        q.push(s[i]);
        charCount[s[i]-'a']++;
        
        while(!q.empty()){
            if(charCount[q.front()-'a']>1)
                q.pop();
            else{
                cout << q.front() << " ";
                break;
            }
        }
        if(q.empty()){
            cout << -1 << " ";
        }
    }
}

int main()
 {
    int T;
    cin >> T;
    while(T--){
	
	int n;
	cin >> n;
	char a[n];
	for(int i=0; i<n; i++){
	    cin >> a[i];
	}
	firstNonRepeating(a, n);
	cout << endl;
	}
	return 0;
}
