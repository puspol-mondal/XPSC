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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string v(n, 'z');

        if (v > s)
        {
            cout << v << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}