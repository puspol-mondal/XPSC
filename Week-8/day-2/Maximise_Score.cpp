#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // calculating  difference
        vector<int> difference(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            difference[i] = abs(a[i] - a[i + 1]);
        }

        int optimal_score = INT_MAX;
        // alice pic the first element
        if (n >= 2)
        {
            optimal_score = min(optimal_score, difference[0]);
        }
        // alice pic the last element
        if (n >= 2)
        {
            optimal_score = min(optimal_score, difference[n - 2]);
        } // alice pic the middle element
        for (int i = 0; i < n - 1; i++)
        {
            int max_difference = max(difference[i - 1], difference[i]);
            optimal_score = min(optimal_score, max_difference);
        }
        cout << optimal_score << "\n";
    }

    return 0;
}