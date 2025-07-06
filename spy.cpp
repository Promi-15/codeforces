#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
   while (t--)
   {
       int n;
       cin >> n;
       int a[n];
       for (int i = 0; i < n; i++)
       {
            cin >> a[i];
       }
       int m;
       if (a[0] == a[1])
       {
           m = a[0];
       }
       else{
           m = a[2];
       }
       for (int i = 0; i < n; i++)
       {
         if(a[i] != m){
             cout << i+1 << endl;
             break;
         }
       }
       
       
   }
   
}