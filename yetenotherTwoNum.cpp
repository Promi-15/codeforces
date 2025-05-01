#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b , ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int res = abs(a - b);
        if(res % 10 >10){
             ans = (res / 10);
        }
        else{
             ans = (res + 9) / 10;
        }
        cout <<ans <<endl;
    }
    
}