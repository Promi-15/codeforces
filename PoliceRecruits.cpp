#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[n];
    int currentManpower = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            if (currentManpower > 0)
            {
                currentManpower--;
            }
            else
            {
                count++;
            }
        } else if (a[i] > 0) {
            currentManpower = currentManpower + a[i];
        }
    }

    cout << count << endl;
}
