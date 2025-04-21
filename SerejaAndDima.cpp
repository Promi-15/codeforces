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
    int left = 0, right = n - 1, x = 0;
    bool turn = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[left] < arr[right])
        {
            x = arr[right];
            right--;
        }
        else
        {
            x = arr[left];
            left++;
        }
        turn = false;
        if (turn)
            s += x;
        else
            d += x;
    }
    cout << s << " " << d << endl;
}
