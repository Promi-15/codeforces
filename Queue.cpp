#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    string x;
    cin >> n >> t;
    cin >> x;
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < x.size() - 1 ; i++)
    {
        if(x[i] == 'B' && x[i+1] == 'G'){
            swap(x[i], x[i + 1]);
             i++;
        }
    }

    }
    cout << x << endl;
}