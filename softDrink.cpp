#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, nl, np, p;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // int totalDrink = k * l;
    int toasto = (k * l )/ nl;
    // cout << toasto << endl;
    // cout <<  " c" << c << "d " << d;
    int toasttw = c * d;

    // cout << toasttw << endl;
    int toastth = p / np;
    // cout << toastth << endl;

    int res = min({toasto, toasttw, toastth}) / n;
    cout << res << endl;
}