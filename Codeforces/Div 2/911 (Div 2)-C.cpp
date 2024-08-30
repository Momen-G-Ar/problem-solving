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

// File creation time: Sun 11/26/2023 17:10:22.09
// Website: Codeforces
// Problem: 911 (Div 2) - C

void dfs(int node, int ans, vector <pair <int, int>>& adj, vector <int>& val, string &s)
{
    if (adj[node].first == 0 && adj[node].second == 0)
        return val[node] = ans, void();

    if (adj[node].first)
    {
        dfs(adj[node].first,
            ans + (s[node - 1] != 'L'),
            adj, val, s);
    }

    if (adj[node].second)
    {
        dfs(adj[node].second,
            ans + (s[node - 1] != 'R'),
            adj, val, s);
    }
}


void solve(int T)
{
    int n; cin >> n;
    string s; cin >> s;
    vector <pair <int, int>> adj(n + 1);
    vector <int> val(n + 1, INT_MAX);
    for (int i = 1; i <= n; ++i)
    {
        int l, r; cin >> l >> r;
        adj[i] = {l, r};
    }

    dfs(1, 0, adj, val, s);
    cout << *min_element(begin(val), end(val)) << '\n';
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
