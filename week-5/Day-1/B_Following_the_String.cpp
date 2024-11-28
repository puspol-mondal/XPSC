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
        map<char, int> mp;

        vector<int> v(n);
        char k = 'a';
        string s = "";
        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;

            if (l == 0)
            {
                s += k;
                mp[k]++;
                k++;
            }
            else
            {
                for (auto x : mp)
                {
                    if (l == x.second)
                    {
                        s += x.first;
                        mp[x.first]++;
                        break;
                    }
                }
            }
        }
        cout << s << "\n";
    }

    return 0;
}