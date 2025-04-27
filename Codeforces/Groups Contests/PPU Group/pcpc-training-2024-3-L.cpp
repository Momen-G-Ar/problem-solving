////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 10/08/2024 22:03:28.16
// Website: Codeforces
// Problem: pcpc-training-2024-3 - L

bool BS(int must, int b, int s, int c, int nb, int nc, int ns, int pb, int pc, int ps, int r)
{
    // cout << must << " ";
    int ans = 0;
    if (must * b > nb)
    {
        ans += (must * b - nb) * pb;
    }
    // cout << ans << " ";

    if (must * c > nc)
    {
        ans += (must * c - nc) * pc;
    }
    // cout << ans << " ";

    if (must * s > ns)
    {
        ans += (must * s - ns) * ps;
    }
    // cout << ans << "\n";
    return ans <= r;
}

void solve(int T)
{
    string ss; cin >> ss;
    int b = 0, s = 0, c = 0;
    for (char q : ss)
    {
        b += q == 'B';
        s += q == 'S';
        c += q == 'C';
    }
    // cout << b << " " << s << " " << c << endl;
    int nb, nc, ns; cin >> nb >> ns >> nc;
    int pb, pc, ps; cin >> pb >> ps >> pc;
    int coins; cin >> coins;

    int l = 0, r = 1e15;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (BS(mid, b, s, c, nb, nc, ns, pb, pc, ps, coins))
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << r << endl;
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
