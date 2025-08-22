#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin >> n;
    for (int i = 4; ; i = i+2)
    {
        if(n % i == 0 ){
             x = i;
             y = n - x;
             break;
        }
        else{
            i++;
            x = i;
            y = n - x;
            break;
        }

    }
    cout << x <<" " << y << endl;
}