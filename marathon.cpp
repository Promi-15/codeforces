#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n, count = 0;
    // 4, -> 0, 1, 2, 3
    // cin >> n;
    // int arr[n][4];
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         if (arr[i][0] < arr[i][j + 1])
    //             count++;
    //         cout << count<<endl;
    //     }
    // }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (b > a)
            count++;
        if (c > a)
            count++;
        if (d > a)
            count++;

        cout << count << endl;
    }



}