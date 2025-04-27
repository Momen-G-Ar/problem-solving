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

// File creation time: Tue 10/08/2024 20:18:01.76
// Website: Codeforces
// Problem: pcpc-training-2024-3 - E

void solve(int T)
{
    int n; cin >> n;
    vector <string> r, w, m, c;
    for (int i = 0; i < n; i++)
    {
        string s, t; cin >> s >> t;
        if (t == "captain")
            c.emplace_back(s);
        else if (t == "woman")
            w.emplace_back(s);
        else if (t == "child")
            w.emplace_back(s);
        else if (t == "man")
            m.emplace_back(s);
        else
            r.emplace_back(s);
    }

    for (string s : r)
        cout << s << "\n";
    for (string s : w)
        cout << s << "\n";
    for (string s : m)
        cout << s << "\n";
    for (string s : c)
        cout << s << "\n";

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
