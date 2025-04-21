#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int shovelCount = 0;
    // 3 * 10 + r
    if (k == r)
    {
        cout << 1 << endl;
    }
    else
    {
        while (true)
        {
            if (((shovelCount * k) % 10 == r) || (shovelCount != 0 and (shovelCount * k) % 10 == 0))
            {
                break;
            }
            shovelCount++;
        }
        cout << shovelCount << endl;
    }
}
/*

1, 2, 3, 4, 5, .. n * shovelCount

7, 7

15, 1, 2 3, 
*/