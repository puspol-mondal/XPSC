#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = a * b * c;
    int ansb = pow(x, 3);
    if (ans == ansb)
    {
        cout << "Equal\n";
    }
    else if (ans > ansb)
    {
        cout << "Cuboid\n";
    }
    else
    {
        cout << "Cube\n";
    }

    return 0;
}