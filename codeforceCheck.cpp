#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "codeforces";
    int n ;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        
        //    if(s.find(c) != string :: npos){
        //        cout << "YES" << endl;
        //    }
        //    else{
        //        cout << "NO" << endl;
        //    }
        if(count(s.begin() , s.end(),c) > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
      
    }
  
    
}