#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b){
            cout << c << endl;
        }
        else if(c == b){
            cout << a << endl;
        }
        else
            cout << b << endl;
    }
    
}