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

// File creation time: Sat 10/12/2024 10:22:59.75
// Website: Codeforces
// Problem: pcpc-training-2024-5 - B

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i)
            v[i] += v[i - 1];
    }
    int q; cin >> q;
    while (q--)
    {
        int x, y, m; cin >> x >> y >> m;
        int ans = max(x, v[n - 1]);
        ans = min(ans, v[m - 1] + y);
        cout << ans << endl;
    }


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
