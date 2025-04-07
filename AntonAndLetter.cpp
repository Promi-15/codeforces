#include<bits/stdc++.h>
using namespace std;
int main(){

    string input;
    int count = 0;
    set<char> s;
    cin >> ws; //// removing whitespace
    getline(cin, input); //////input like {a, b, c.....}

    for ( char c : input)

    {
       if(c >= 'a' && c <= 'z'){
           s.insert(c);
       }
    }
    
    for ( char c : s)
    {
        // cout << c << " ";
        count++;
    }
    cout << count << endl;
}