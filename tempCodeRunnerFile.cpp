#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       
        
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        
    }
}