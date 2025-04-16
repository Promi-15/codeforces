#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n];
    

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    int min = arr[0] , max = arr[0];
    // cout << max << " " << min;
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] > max)
        {
            count++;
            max = arr[i];
        }
        
    if (arr[i] < min)
       {
           count++;
           min = arr[i];}
    }
    cout << count << endl;
}