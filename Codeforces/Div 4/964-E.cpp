////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

const long long N = 2e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sat 08/10/2024 17:44:41.53
// Website: Codeforces
// Problem: 964 - E

long long logg[N];

long long logbx(long long x)
{
    int ans = 0;
    while (x)
    {
        x /= 3;
        ans++;
    }
    return ans;
}

void solve(int T)
{
    int l, r; cin >> l >> r;
    long long ans = logg[r] - logg[l - 1], mn = INT_MAX, m = l + 3;
    while (l <= m && l <= r)
    {
        mn = min(logg[l] - logg[l - 1], mn);
        l++;
    }
    cout << ans + (mn != INT_MAX ? mn : 0) << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif
    for (int i = 1; i < N; i++)
        logg[i] = logbx(i), logg[i] += logg[i - 1];
    auto start = high_resolution_clock::now();
    int t = 1;  cin >> t;
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
