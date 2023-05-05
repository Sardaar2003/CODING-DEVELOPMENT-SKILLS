#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    long double ha, hb, hc;
    cin >> ha >> hb >> hc;
    if (ha <= 0 or hb <= 0 or hc <= 0)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    ha = 1.0 / ha;
    hb = 1.0 / hb;
    hc = 1.0 / hc;
    long double a = (ha + hb + hc);
    long double b = (-ha + hb + hc);
    long double c = (ha - hb + hc);
    long double d = (ha + hb - hc);
    if (a <= 0 or b <= 0 or c <= 0 or d <= 0)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    a = 1.0 / a;
    b = 1.0 / b;
    c = 1.0 / c;
    d = 1.0 / d;
    a = sqrtl(a);
    b = sqrtl(b);
    c = sqrtl(c);
    d = sqrtl(d);
    long double ans = a * b * c * d;
    cout << fixed << setprecision(3) << ans << '\n';
}
int main()
{

    fio;
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}