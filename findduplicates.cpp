{
#include <bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n);
int main()
{
  int t;
  cin>>t;
  while(t-- > 0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		printDuplicates(a, n);
		cout<<endl;
  }
  return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
void printDuplicates(int arr[], int n)
{
   int checked[n];  int flag=0;
    for(int i=0;i<n;i++)
        checked[i]=0;
    for(int i=0;i<n;i++){
        checked[arr[i]]++;
        if(checked[arr[i]] == 2){
            cout<<arr[i]<<" ";
            flag=1;
        }
    }
  
   
    if(!flag)
      cout<<"-1";
}
