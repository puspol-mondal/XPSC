#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;

    if (x >= y)
    {
        cout << 0 << "\n";
    }
    else
    {
        if (x == 1)
        {
            cout << (y / x) - 1;
        }
        else
        {
            cout << y / x;
        }
    }

    return 0;
}