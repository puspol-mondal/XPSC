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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        int one1 = 0, one2 = 0, one3 = 0;
        int zero1 = 0, zero2 = 0, zero3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
                one1++;
            if (s1[i] == '0')
                zero1++;

            if (s2[i] == '1')
                one2++;
            if (s2[i] == '0')
                zero2++;

            if (s3[i] == '1')
                one3++;
            if (s3[i] == '0')
                zero3++;
        }

        if ((zero1 + zero2 + zero3) % n != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        int ans1 = min(min(zero2, one2), min(zero3, one3));
        int tmp = max(min(zero2, one2), min(zero3, one3));
        int ans2 = min(min(zero1, one1), tmp);

        cout << ans1 + ans2 << "\n";
    }

    return 0;
}