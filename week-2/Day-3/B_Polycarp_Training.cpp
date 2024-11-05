#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ml;
    while (n--)
    {
        int a;
        cin >> a;
        ml.insert(a);
    }
    int problem = 1;
    int ans = 0;
    while (!ml.empty())
    {
        auto l = ml.lower_bound(problem);
        if (l != ml.end())
        {
            ans++;
            ml.erase(l);
        }
        else
        {
            break;
        }
        problem++;
    }
    cout << ans;
    return 0;
}