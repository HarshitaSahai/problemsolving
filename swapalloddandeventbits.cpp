#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i = 0, arr[10];
        cin >> n;
        while(n)
        {
            arr[i++] = n%2;
            n /= 2;
        }
        arr[i] = 0;
        int x, sum = 0;
        for(int j = 0; j < i; j += 2)
        {
            x = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = x;

            sum += arr[j]*pow(2, j);
            sum += arr[j+1]*pow(2, j+1);
        }
        cout << sum << endl;
    }
    return 0;
}
