#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char k : s)
        {
            if (!st.empty() && st.top() == k)
            {
                st.pop();
            }
            else
            {
                st.push(k);
            }
        }
        if (st.size() == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << st.size() << endl;
        }
    }

    return 0;
}