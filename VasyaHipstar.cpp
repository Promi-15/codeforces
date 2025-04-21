#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << b <<" ";
        int remRed = a - b;
        int res1 = remRed / 2;
        cout << res1 << endl;
    }
    else
    {
        cout << a<<" ";
        int remBlue = b - a;
        int res = remBlue / 2;
        cout << res << endl;
    }

}