#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, k, res =0 ,count = 0;
    cin >> m >> k;
    int totalMin = 240;

    for (int i = 1; i <= m; i++)
    {
        res = res + (5 * i);
        int time = totalMin - res;
        // cout <<"time"<< time << endl;
        if(time >= k){
            count++;
        }
    }
    cout << count << endl;
} 