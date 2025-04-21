#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , s =0 , d = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    std::sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            s += arr[i];
            // cout << "s " << s;
        }
        else
            d += arr[i];
            // cout << d <<"d " ;
    }
       if(s>d)
    cout << s << " " << d << endl;
    else
    cout << d << " " << s << endl; 
}