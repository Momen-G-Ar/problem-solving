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

// File creation time: Fri 08/30/2024 10:53:46.42
// Website: Codeforces
// Problem: qualifications - F
// url: https://codeforces.com/group/s6oaAC3jRI/contests

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n);
    map <int, int> m;
    vector <int> pp;
    int x = 1;
    pp.emplace_back(1);
    while (x < 1e10)
    {
        x *= 2;
        pp.emplace_back(x);
    }
    for (int &i : v)
    {
        cin >> i;
        m[i]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]--;
        for (int x : pp)
        {
            if (m.count(x - v[i]))
            {
                ans += m[x - v[i]];
            }
        }
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
