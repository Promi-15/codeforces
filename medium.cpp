#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if((a > b and a < c) || (a > c and a < b)) {
            cout << a << endl;
        } else if((b > a and b < c) || (b > c and b < a)) {
            cout << b << endl;
        } else{
            cout << c << endl;
        }
    }
}