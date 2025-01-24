#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
            cout << endl;
        }
        else
        {
            if (n == 3)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            int x = n / 2;
            int y = -(x - 1);
            for (int i = 1; i <= n; i++)
            {
                if (i % 2)
                {
                    cout << y << " ";
                }
                else
                {
                    cout << x << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}