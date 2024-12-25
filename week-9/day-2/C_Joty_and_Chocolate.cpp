#include <bits/stdc++.h>
using namespace std;
long long int LCM(long long int a, long long int b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long int x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
    long long int ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));
    cout << ans << "\n";
    return 0;
}