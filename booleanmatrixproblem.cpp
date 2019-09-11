#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r,c,i,j;
	    cin>>r>>c;
	    int a[r][c];
	    
	    //taking inputs in array
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>a[i][j];
	        }
	    }
	    
	    //initalise to find if any 1 exist in first row and column
	    bool row1=false;
	    bool col1=false;
	    
	    //first row and column is turn to 1 if any row or column finds 1
	    for(i=0;i<r;i++){
	        for(j=0;j<c;j++){
	            
	            if(i==0 && a[i][j]==1)
	            row1=true;
	            
	            if(j==0 && a[i][j]==1)
	            col1=true;
	            
	            if(a[i][j]==1){
	                a[0][j]=1;
	                a[i][0]=1;
	            }
	        }
	    }
	    
	    //chaing every row except for first row and column
	    for(i=1;i<r;i++){
	        for(j=1;j<c;j++){
	            
	            if(a[0][j]==1 || a[i][0]==1){
	                a[i][j]=1;
	            }
	        }
	    }
	    
	    //if first columm there is one then putting 1 in every first column
	    if(col1){
	        for(i=0;i<r;i++){
	            a[i][0]=1;
	        }
	    }
	    
	    //same doing with first row
	    if(row1){
	        for(j=0;j<c;j++){
	            a[0][j]=1;
	        }
	    }
	    
	    //printing elements
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	    
	    
	}
	return 0;
}
