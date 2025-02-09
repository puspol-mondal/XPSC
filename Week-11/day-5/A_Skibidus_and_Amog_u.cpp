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
        string root1 = s.substr(0, s.length() - 2);

        string root = s.substr(s.length() - 2, 2);
        if (root == "us")
        {
            cout << root1.append("i") << endl;
        }
    }

    return 0;
}