#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    int max = 0;
    int min = 101;

    int minIndex;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] <= min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    int maxIndex;
    int j = n - 1;
    while (j >= 0)
    {
        if (arr[j] == max)
        {
            maxIndex = j;
            break;
        }
        j--;
    }
    int res = maxIndex + (n - 1 - minIndex);
    if(maxIndex > minIndex) {
        res = res - 1;
    }
    //if(minIndex == maxIndex)
    cout << res << endl;
}