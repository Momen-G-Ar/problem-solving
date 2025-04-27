////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sat 12/30/2023 16:45:33.74
// Website: Codeforces
// Problem: Good Bye 2023 - A

void solve(int T)
{
    int n, k; cin >> n >> k;
    vector <int> v(n);
    bool ok = true;
    int res = 2023;
    for (int &i : v)
    {
        cin >> i;
        ok &= (res % i == 0);
        if (ok)
            res /= i;
    }
    if (!ok)
        return cout << "NO\n", void();
    cout << "YES\n";
    cout << res << " ";
    for (int i = 0; i < k - 1; i++)
        cout << 1 << " ";
    cout << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

    int t = 1;  cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
