#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n], ar[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ar[a[i]] = i;
        
    }
   for (int i = 1; i <= n; i++)
   {
       cout << ar[i] << " ";
   }
   
    
}