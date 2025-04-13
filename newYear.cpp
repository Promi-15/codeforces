#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+3);
    for (int i = 0; i < 1; i++)
    {
      
        int dis1 = abs(arr[i] - arr[i + 1]);
       
        int dis2 = abs(arr[i+1] - arr[i + 2]);

        int res = dis1 + dis2;
        cout << res << endl;
    }
    
}