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
        if (n < 2)
        {
            cout << "0\n";
        }

        else if (n == 2)
        {
            cout << "1\n";
        }
        else
        {
            int ans = 0;
            for (int i = 2; i <= n; i = i + 7)
            {
                ans = ans + 1;
            }
            cout << ans << "\n";
        }
    }

    return 0;
}