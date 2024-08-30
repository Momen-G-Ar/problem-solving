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

// File creation time: Fri 08/30/2024 10:55:03.77
// Website: Codeforces
// Problem: qualifications - G
// url: https://codeforces.com/group/s6oaAC3jRI/contests

void solve(int T)
{
    int n; cin >> n;
    vector <set <pair <int, int>>> v(n + 1);
    v[n].insert({{1, n}});
    int ind = n, currentInd = 1;
    vector <int> ans(n);
    while (ind > 0)
    {
        if (v[ind].empty())
        {
            ind--;
            continue;
        }

        auto x = *v[ind].begin();
        v[ind].erase(v[ind].begin());
        int l = x.first, r = x.second;
        if (ind & 1)
        {
            int req = (l + r) / 2, s1 = req - l, s2 = r - req;
            v[s1].insert({l, req - 1});
            v[s2].insert({req + 1, r});
            ans[req - 1] = currentInd++;
        }
        else
        {
            int req = (l + r - 1) / 2, s1 = req - l, s2 = r - req;
            v[s1].insert({l, req - 1});
            v[s2].insert({req + 1, r});
            ans[req - 1] = currentInd++;
        }
    }

    for (int i : ans)
        cout << i << " ";
    cout << endl;
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
