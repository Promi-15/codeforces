#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b, c;
    cin >> a >> b >> c;
    string result = a + b;
    // cout << result << endl;
    // int count[26] = {0};
    sort(result.begin(), result.end());
    sort(c.begin(), c.end());
    if(result == c){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO" << endl;
    }

}