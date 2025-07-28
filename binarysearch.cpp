#include <bits/stdc++.h>
using namespace std;
int main()
{
    int target = 5;
    vector<int> ar = {1, 4, 6, 7, 10, 50, 60};
    int left = 0;
    int right = ar.size() - 1;
    int foundTarget = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if(ar[mid] == target) {
            foundTarget = ar[mid];
            break;
        }
        else if(ar[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    if(foundTarget == -1) {
        cout << "Target not found" << endl;
    } else
        cout << "Target found" << foundTarget << endl;
}