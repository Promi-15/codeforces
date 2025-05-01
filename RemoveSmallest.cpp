#include<bits/stdc++.h>
using namespace std;
int main(){
    int t , n ;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
           if(abs(arr[i] - arr[j]) <= 1){
               int r = min(arr[i], arr[j]);
               arr.pop_front();
           }
        }
        
        
    }
    
}