#include <bits/stdc++.h>
using namespace std;

bool isNonDecreasing(const vector<int> &arr)
{
    for (size_t i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isNonDecreasing(a))
        {
            cout << "Yes\n";
            continue;
        }

        bool canSort = false;
        for (int i = 1; i < n; i++)
        {
            vector<int> y(a.begin() + i, a.end());
            vector<int> x(a.begin(), a.begin() + i);

            y.insert(y.end(), x.begin(), x.end());
            if (isNonDecreasing(y))
            {
                canSort = true;
                break;
            }
        }

        if (canSort)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}