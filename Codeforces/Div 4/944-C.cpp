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

// File creation time: Fri 08/30/2024 17:30:31.17
// Website: Codeforces
// Problem: 944 - C

void solve(int T)
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    if ((a <= c && c <= b && !(a <= d && d <= b)) || (a <= d && d <= b && !(a <= c && c <= b)))
        cout << "YES\n";
    else
        cout << "NO\n";




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
