#include <bits/stdc++.h>
using namespace std;

int sum(int a)
{
    int digitSum = 0;
    while (a)
    {
        digitSum = digitSum + a % 10;
        a = a / 10;
    }
    return digitSum;
}
int main()
{
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sum(p);
        cout << sum(p) << endl;
    }
}