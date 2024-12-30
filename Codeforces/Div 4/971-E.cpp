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
// File creation time: Tue 09/03/2024 18:10:32.20
// Website: Codeforces
// Problem: 971 - E

long long sum(int l, int r)
{
    return (r * (r + 1) / 2) - (l * (l - 1) / 2);
}

bool BS(int k, int i, int n)
{
    return sum(k, i) <= sum(i + 1, k + n - 1);
}

void solve(int T)
{
    int n, k; cin >> n >> k;
    int l = k, r = k + n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (BS(k, mid, n))
            l = mid + 1;
        else
            r = mid - 1;
    }
    int ans = min({
        abs(sum(k, r - 1) - sum(r, k + n - 1)),
        abs(sum(k, r) - sum(r + 1, k + n - 1)),
        abs(sum(k, r + 1) - sum(r + 2, k + n - 1))
    });
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
