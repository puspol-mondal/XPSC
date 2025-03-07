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
        int x, y;
        cin >> x >> y;

        int screensForY = (y + 1) / 2;

        int remainingCells = screensForY * 15 - y * 4;

        int totalScreens = screensForY;
        if (x > remainingCells)
        {
            totalScreens += (x - remainingCells + 14) / 15;
        }

        cout << totalScreens << endl;
    }
    return 0;
}