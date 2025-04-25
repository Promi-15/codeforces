#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0, d = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    bool isSereja = true;
    while(l <= r) {
        if (isSereja)
        {
            s = s + max(arr[l], arr[r]);
            isSereja = false;
        } else {
            d = d + max(arr[l], arr[r]);
            isSereja = true;
        }
        if(arr[l] > arr[r]) {
            l++;
        }else r--;
    }
    cout << s << " " << d << endl;
}
