{
// C++ program to count 2s from 0 to n
#include <bits/stdc++.h>
using namespace std;
/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d);
/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number);
// Driver Coden
int main()
{
    long long int n;
    long long int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << numberOf2sinRange(n) << endl;
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int num, long long int d, long long int n)
{
    int p = pow(10,d);
    int q = num/p;
    if(n>2)
    return ((q+1)*p)/10;
    else if(n==2)
    return (q*p)/10 + num%(p/10) + 1;
    else
    return (q*p)/10;
}
long long int numberOf2sinRange(long long int num)
{
    long long int n = num,ans = 0, i = 1,r;
    while(n>0)
    {
        r = n%10;
        ans += count2sinRangeAtDigit(num,i,r);
        n = n/10;
        i++;
    }
    return ans;
}
