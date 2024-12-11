#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if (m >= (double)n / 2)
    {
        cout << "NEWBIE\n";
    }
    else
    {
        cout << "PRO\n";
    }

    return 0;
}