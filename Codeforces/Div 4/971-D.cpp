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

// File creation time: Tue 09/03/2024 17:57:20.21
// Website: Codeforces
// Problem: 971 - D

void solve(int T)
{
    int n; cin >> n;
    vector <int> z(n + 1), o(n + 1);
    for (int i = 0; i < n; i++)
    {
        int f, s; cin >> f >> s;
        if (s == 0)
            z[f]++;
        else
            o[f]++;
    }
    long long ans = 0;
    for (int i = 0; i <= n; ++i)
    {
        if (z[i] && o[i])
            ans += 1LL * (n - 2);
    }

    for (int i = 1; i <= n - 1; ++i)
    {
        if (o[i - 1] && z[i] && o[i + 1])
            ans += 1LL;
        if (z[i - 1] && o[i] && z[i + 1])
            ans += 1LL;
    }

    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

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
