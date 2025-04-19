#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, y, z, m;
    cin >> x >> y >> z >> m;
    int maxi = max({x, y, z, m});
    // cout<< x << y << z << m;
    // cout << maxi << endl;

    int c = abs(maxi - x);
    int b = abs(maxi - y);
    int a = abs(maxi - z);
    int d = abs(maxi - m);

    if(a!=0)
        cout << a << " ";
    if(b!=0)
        cout << b << " ";
    if(c!=0)
        cout << c << " ";
    if(d!=0)
        cout << d << " ";

    cout << endl;
}