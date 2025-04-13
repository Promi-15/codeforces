#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    // int arr[t];
    vector<int> arr;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int res = (n - 1) / 2;
        arr.push_back(res);
        // cout<<res<<endl;
    }
    
    for (int i = 0; i < t; i++)
    {
        // cin >> n;
        // int res = (n - 1) / 2;
        // arr.push(res);
        cout<<arr[i]<<endl;
    }
    
}