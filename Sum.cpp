#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count = 0;
    cin >> n;
    int a, b, c;
    vector<string> res;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if(a+b == c || a+c == b || b+c == a){

            res.push_back("YES");
            }
            else {
                res.push_back("NO");
            } 
        }
    for (const auto& r : res)
    {
        cout << r << endl;
    }
    
}