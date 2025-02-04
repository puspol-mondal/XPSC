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
        vector<char> s(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> s[i];
        }
        int a = 0;
        bool f = false;
        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'W' && s[i + 1] == 'W' && s[i + 2] == 'W')
            {
                f = true;
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}