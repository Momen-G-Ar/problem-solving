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

// File creation time: Sat 09/21/2024 18:51:37.13
// Website: Codeforces
// Problem: 974 - D

void solve(int T)
{
    int n, d, k; cin >> n >> d >> k;
    vector <int> st(n + 1), en(n + 1);
    for (int i = 0; i < k; i++)
    {
        int l, r; cin >> l >> r;
        st[l]++;
        en[r]++;
    }
    //     cout << f << " " << s << endl;
    int cc = 0;
    for (int i = 1; i <= d; i++)
        cc += st[i];

    int s = 1, sumb = cc, ansb = 1, summ = cc, ansm = 1;
    for (int i = d + 1; i <= n; i++)
    {
        cc += st[i];
        cc -= en[s++];
        if (cc > sumb)
        {
            sumb = cc;
            ansb = s;
        }
        if (cc < summ)
        {
            summ = cc;
            ansm = s;
        }
        // cout << sumb << " " << summ << endl;
    }

    cout << ansb << " " << ansm << endl;

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