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

// File creation time: Sun 09/01/2024 18:10:05.62
// Website: Codeforces
// Problem: 970 - D

string s;

class DSU {
private:
    int n;
    vector <int> par, size, res;
public:

    DSU(int sz) {
        n = sz;
        init();
    }

    void init() {
        par = size = res = vector <int> (n + 100);
        for (int i = 1; i <= n; i++)
            par[i] = i, size[i] = 1, res[i] = (i <= s.size() && s[i - 1] == '0');
    }

    bool join(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return false;

        // u must bigger
        if (size[u] < size[v])
            swap(u, v);
        par[v] = u;
        size[u] += size[v];
        res[u] += res[v];
        return true;
    }

    int find(int u)
    {
        return par[u] = ((u == par[u]) ? u : find(par[u]));
    }

    int result(int u)
    {
        return res[find(u)];
    }

    void print()
    {
        for (int i = 0; i <= n; i++)
            cout << i << " " << par[i] << " " << size[i] << " " << res[i] << endl;
        cout << endl;
    }
};

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> s;
    DSU d = DSU(n);
    d.init();
    for (int i = 1; i <= n; i++)
        d.join(i, v[i - 1]);
    for (int i = 1; i <= n; i++)
        cout << d.result(i) << " ";
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
