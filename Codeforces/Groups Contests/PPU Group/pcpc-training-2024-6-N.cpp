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

// File creation time: Tue 10/15/2024 20:45:47.58
// Website: Codeforces
// Problem: pcpc-training-2024-6 - N

void solve(int T)
{
    int n, m, k; cin >> n >> m >> k;
    vector v(n, vector <int> (m));
    vector <int> hn(n), hm(m);
    for (int i = 0; i < n; i++)
        hn[i] = i;
    for (int i = 0; i < m; i++)
        hm[i] = i;

    for (auto &x : v)
    {
        for (int &i : x)
            cin >> i;
    }
    while (k--)
    {
        char c; cin >> c;
        int f, s; cin >> f >> s;
        f--, s--;
        if (c == 'g')
        {
            cout << v[hn[f]][hm[s]] << endl;
        }
        else if (c == 'r')
        {
            swap(hn[f], hn[s]);
        }
        else
        {
            swap(hm[f], hm[s]);
        }
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
