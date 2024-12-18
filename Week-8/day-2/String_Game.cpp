#include <bits/stdc++.h>
using namespace std;
string winner(const string &s)
{
    int n = s.size();
    if (n <= 1)
    {
        return "Ramos";
    }

    for (int i = 1; i < n; ++i)
    {
        if (s[i - 1] == s[i])
        {
            string s1 = s.substr(0, i - 1);
            string s2 = s.substr(i + 1);
            return winner(s1 + s2);
        }
    }

    return "Zlatan";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << winner(s) << endl;
    }

    return 0;
}
