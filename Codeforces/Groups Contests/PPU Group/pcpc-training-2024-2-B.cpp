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

// File creation time: Sat 10/05/2024 10:55:00.53
// Website: Codeforces
// Problem: pcpc-training-2024-2 - B

int dfs(string nd, string par, map <string, vector <string>>& g)
{
    int ans = 0;
    for (auto ch : g[nd])
    {
        if (ch != par)
            ans = max(ans, dfs(ch, nd, g));
    }
    return ans + 1;
}

string low(string s)
{
    for (char &c : s)
        c = tolower(c);
    return s;
}

void solve(int T)
{
    int n; cin >> n;
    map <string, vector <string>> g;
    for (int i = 0; i < n; i++)
    {
        string s1, s2, s3; cin >> s1 >> s2 >> s3;
        s1 = low(s1);
        s3 = low(s3);
        g[s1].emplace_back(s3);
        g[s3].emplace_back(s1);
    }

    cout << dfs("polycarp", "_", g) << endl;
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
