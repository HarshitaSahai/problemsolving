{
#include<bits/stdc++.h>
using namespace std;
int convertFive(int n);
 
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}
}
/*This is a function problem.You only need to complete the function given below*/
/*you are required to complete this method*/
int convertFive(int n)
{
    int count = 1,num=0,rem,res;
    if(n>10000)
    {
        printf("Number Should be less than 10000:");
        return -1;
    }
    while(n)
    {
        res=n/10;
        rem=n%10;
        if(rem==0)
        {
           num=num+count*5;
        }
        
        else 
            num = num + rem*count;
        count = count*10;
        n=n/10;
    
    }
    return num;

}
