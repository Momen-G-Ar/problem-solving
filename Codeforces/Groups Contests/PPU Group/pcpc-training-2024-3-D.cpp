////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};
#define int long long
// File creation time: Tue 10/08/2024 20:27:01.04
// Website: Codeforces
// Problem: pcpc-training-2024-3 - D
map <int, bool> m;

set <int> div(int n)
{
    set <int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.insert(i);
            ans.insert(n / i);
        }
    }
    return ans;
}

void solve(int T)
{
    int a, b; cin >> a >> b;
    int q; cin >> q;
    int gc = gcd(a, b);
    auto x = div(gc);

    while (q--)
    {
        int l, r; cin >> l >> r;
        auto temp = x.lower_bound(l);
        int ans = 0;
        while (temp != x.end() && *temp <= r)
        {
            ans = *temp;
            temp = next(temp);
        }
        if (ans)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

    auto start = high_resolution_clock::now();
    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration_ms = duration_cast<milliseconds>(stop - start);
    auto duration_mcs = duration_cast<microseconds>(stop - start);
    cerr << "Runtime:" << duration_ms.count() << "Milli-Second." << endl;
    cerr << "Runtime:" << duration_mcs.count() << "Micro-Second." << endl;

    return 0;
}
