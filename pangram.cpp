#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,count = 0;
   
    cin >> n;
    string s;
   
        cin >> s;
    

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    set<char> st(s.begin(),s.end());

    if(st.size() == 26)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;
}