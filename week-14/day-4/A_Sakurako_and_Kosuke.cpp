#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int pos = 0;
    int move = 1;
    string lastPlayer = "Kosuke";
    while (true)
    {
        if (move % 2 == 1)
        {
            pos -= (2 * move - 1);
            lastPlayer = "Sakurako";
        }
        else
        {
            pos += (2 * move - 1);
            lastPlayer = "Kosuke";
        }
        if (abs(pos) > n)
        {
            break;
        }
        move++;
    }
    cout << lastPlayer << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}