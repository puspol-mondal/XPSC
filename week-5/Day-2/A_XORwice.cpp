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
        int a, b;
        cin >> a >> b;
        int cnt = max(a, b);
        int XOR = (a ^ cnt) + (b ^ cnt);
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << XOR << endl;
        }
    }
    return 0;
}