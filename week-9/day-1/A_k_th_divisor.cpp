#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, k;
    cin >> n >> k;
    vector<long long int> diviser;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            diviser.push_back(i);
            if (n / i != i)
            {
                diviser.push_back(n / i);
            }
        }
    }
    sort(diviser.begin(), diviser.end());
    long long int sz = diviser.size();
    if (k > sz)
    {
        cout << "-1\n";
    }
    else
    {
        cout << diviser[k - 1] << "\n";
    }

    return 0;
}