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
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        if (n % 2 == 1)
        {
            cout << n / 2 << "\n";
        }
        else
        {
            cout << (n / 2) + 1 << "\n";
        }
    }

    return 0;
}