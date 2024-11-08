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
        char ch[s.size()];
        for (int i = 0; i < s.size(); i++)
        {
            ch[i] = s[i];
        }

        // int n;
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //     int a, b;
        //     cin >> a >> b;
        //     a--;
        //     ch[a] = b;
        // }
        for (int i = 0; i < n; i++)
        {
            cout << ch[i] << " ";
        }
    }

    return 0;
}