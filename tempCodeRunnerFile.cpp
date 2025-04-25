#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int a;
        cin >> a ;
        int firstThree = a / 1000;
        int secondThree = a % 1000;
        int x = firstThree % 10;
        int y = (firstThree % 100) % 10;
        int z = (firstThree / 100) % 10;
        // int z =

        // int firstSum = (firstThree % 100) + (firstThree / 100) % 10 +
        cout << x<<" " << y<<" " <<z;
    }
}