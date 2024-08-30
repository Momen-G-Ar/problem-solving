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

// File creation time: Fri 08/30/2024 10:52:29.94
// Website: Codeforces
// Problem: qualifications - D
// url: https://codeforces.com/group/s6oaAC3jRI/contests

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n);
    map <int, deque <int>> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]].emplace_back(i);
    }
    int a[] = {4, 8, 15, 16, 23, 42};
    int ans = 0;
    while (m[4].size())
    {
        int ind = m[4][0];
        m[4].pop_front();
        int cnt = 0;
        for (int i = 1; i < 6; i++)
        {
            while (m[a[i]].size() && m[a[i]][0] < ind)
            {
                m[a[i]].pop_front();
            }
            if (m[a[i]].size())
            {
                ind = m[a[i]][0];
                m[a[i]].pop_front();
            }
            else
            {
                goto here;
            }
        }
        ans += 6;
here: {}
    }
    cout << n - ans << endl;



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
