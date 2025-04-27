////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 10/15/2024 20:25:41.20
// Website: Codeforces
// Problem: pcpc-training-2024-6 - M

void solve(int T)
{
    int n; cin >> n;
    int mn = 1e10, mx = -1;
    vector <pair <int, int>> v(n);
    for (auto &[f, s] : v)
    {
        cin >> f >> s;
        mn = min(mn, f);
        mx = max(mx, s);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i].first == mn && v[i].second == mx)
            return cout << i + 1 << endl, void();
    }
    cout << -1 << endl;


}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
