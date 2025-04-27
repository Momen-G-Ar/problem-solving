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

// File creation time: Sat 10/05/2024 10:08:10.82
// Website: Codeforces
// Problem: pcpc-training-2024-2 - J

void solve(int T)
{
    string s; cin >> s;
    int h = 0;
    map <char, bool> vis;
    for (int i = 0; i < s.size();)
    {
        if (s[i + 1] == '/')
        {
            h--;
            for (int i = 0; i < 2 * h; i++)
                cout << " ";
            cout << s[i] << s[i + 1] << s[i + 2] << s[i + 3] << endl;
            i += 4;
        }
        else
        {
            for (int i = 0; i < 2 * h; i++)
                cout << " ";
            cout << s[i] << s[i + 1] << s[i + 2] << endl;
            i += 3;
            h++;
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
