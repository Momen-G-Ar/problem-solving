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

// File creation time: Tue 11/07/2023 18:46:58.59
// Website: Codeforces
// Problem: 908 (Div 2) - C

void solve(int T)
{
    int n, k; cin >> n >> k;
    vector <int> v(n);
    for (int &i : v)
        cin >> i;
    int l = n - 1;
    vector <int> vis(n, false);
    while (k--)
    {
        if (v[l] > n)
            return printf("No\n"), void();
        if (vis[l])
            return printf("Yes\n"), void();
        vis[l] = true;
        l -= v[l];
        if (l < 0)
            l += n;
    }
    printf("Yes\n");
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
