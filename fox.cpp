#include<bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    bool flag = true;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        if(i % 2 == 0){
            for (int j = 0; j < c; j++)
            {
                cout << "#" ;
            }
            cout << " " << endl;
        }
       else{
        if(flag == true) {
            for (int j = 0; j < c-1; j++)
            {
                cout << "." ;
            }
            cout << "#" << endl;
            flag = false;
       }
       else{
           cout << "#" ;
           
           for (int j = 1; j < c ; j++)
           {
               cout << ".";
           }
           cout << endl;
           // cout << ".." << endl;
           flag = true;
       }
        }
    }
    
}