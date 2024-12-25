#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    int count = 0;
    if (x >= 4)
    {
        count += x / 4;
        x = x % 4;
    }
    if (x >= 2)
    {
        count += x / 2;
        x = x % 2;
    }
    if (x >= 1)
    {
        count += x / 1;
        x = x % 1;
    }
    cout << count;

    return 0;
}