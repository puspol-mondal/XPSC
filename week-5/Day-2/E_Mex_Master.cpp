#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int zero = 0, nonzero = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                nonzero++; // nonzero element cnt korbe
            else
                zero++; // zero element cnt korbe
        }
        int ans;
        if (zero == 0)
        { // zero cnt 0 hole
            ans = 0;
        }
        else
        {
            if (zero - 1 <= nonzero)
                ans = 0;
            else
            {
                int mx = *max_element(a.begin(), a.end());
                if (mx == 1) // maximum value 1 hole 2 ans
                    ans = 2; // for example 0 0 1 0  then we sort this element
                else         // 0 0 0 1  then ans 2 hbe ar nahole ans 1 hbe
                    ans = 1;
            }
        }
        cout << ans << endl;
    }
}