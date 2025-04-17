#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        std ::transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == "yes")
            st.push_back("YES");
        else
            st.push_back("NO");
    }

    for (const auto& s : st)
    {

            cout << s << endl;
    }
}