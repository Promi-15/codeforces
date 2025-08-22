#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sum = 0 , res;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < k)
        {
            sum += 1;
        }
    }
    // cout << sum << endl;
    if (sum % 3 == 0)
    {
         res = sum / 3;
    }
    else
         res = 0;

    cout << res << endl;
}