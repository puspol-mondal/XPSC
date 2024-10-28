#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        d.push_back(a);
    }
    int ans1 = 0, ans2 = 0, who = 0;
    while (!d.empty())
    {
        int left = d.front(), right = d.back();
        int mx = max(left, right);
        if (who % 2 == 0)
        {
            ans1 += mx;
        }
        else
        {
            ans2 += mx;
        }

        if (mx == left)
        {
            d.pop_front();
        }
        else
        {
            d.pop_back();
        }
        who++;
    }
    cout << ans1 << " " << ans2;

    return 0;
}