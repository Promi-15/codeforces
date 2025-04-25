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
        int y = (firstThree / 10) % 10;
        int z = (firstThree / 100) % 10;
        int sumFirst = x + y + z;
        int sx = secondThree % 10;
        int sy = (secondThree / 10) % 10;
        int sz = (secondThree / 100) % 10;
        int sumSecond = sx + sy + sz;
          if(sumFirst == sumSecond){
              cout << "YES" << endl;
          }
          else{
              cout << "NO" << endl;
          }
    }
}