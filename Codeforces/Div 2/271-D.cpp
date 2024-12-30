////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

const long long N = 1e5 + 7, mod = 1e9 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sat 09/07/2024 10:59:41.08
// Website: Codeforces
// Problem: 271 - D

int t, k, a, b;
int dp[N], com[N];

void calc()
{
    dp[0] = 1;
    for (int i = 1; i < N; i++)
    {
        dp[i] += dp[i - 1];
        if (i >= k)
            dp[i] += dp[i - k];
        dp[i] %= mod;
    }
    com[0] = 0;
    for (int i = 1; i < N; i++)
    {
        com[i] += com[i - 1] + dp[i];
        com[i] %= mod;
    }
}

void solve(int T)
{
    cin >> t >> k;
    memset(dp, 0, sizeof dp);
    calc();
    while (t--)
    {
        cin >> a >> b;
        cout << ((com[b] - com[a - 1]) + mod) % mod << endl;
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
