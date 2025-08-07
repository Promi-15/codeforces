#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    vector<int> v;
    
        // cin >> n;
        for (int j = 0; j < 2000; j++)
        {
            if (j % 3 != 0 && j % 10 != 3)
            {
                v.push_back(j);
            }
        }
         
    
      while (t--) {
        cin >> n;
        cout << v[n - 1] << endl;  // n-th number → index n-1
    }


    
}