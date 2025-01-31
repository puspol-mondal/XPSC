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
        vector<int> frq(101, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            frq[x]++;
        }
        int mexa = 0, mexb = 0;
        while (frq[mexa] > 0)
        {
            mexa++;
        }

        while (frq[mexb] > 1)
        {
            mexb++;
        }

        cout << mexa + mexb << "\n";
    }

    return 0;
}