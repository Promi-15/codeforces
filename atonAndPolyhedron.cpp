#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , res = 0;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       if(arr[i] == "Icosahedron"){
           res = res + 20;
       }
       else if(arr[i] == "Dodecahedron"){
           res = res + 12;
       }
       else if(arr[i] == "Octahedron"){
           res = res + 8;
       }
       else if(arr[i] == "Cube"){
           res = res + 6;
       }
       else if(arr[i] == "Tetrahedron"){
           res = res + 4;
       }
      
    }
    cout << res << endl;
}