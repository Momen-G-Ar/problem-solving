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

// File creation time: Sun 09/01/2024 18:41:04.15
// Website: Codeforces
// Problem: 970 - E

void solve(int T)
{
    // cout << "T = " << T << endl;
    int n, cne = -1, cno = -1; cin >> n;
    string s; cin >> s;
    map <char, int> me, mo, moo, mee;
    for (int i = 1; i <= n; ++i)
    {
        if (i & 1)
        {
            mo[s[i - 1]]++;
            cno = max(cno, mo[s[i - 1]]);
        }
        else
        {
            me[s[i - 1]]++;
            cne = max(cne, me[s[i - 1]]);
        }
    }
    if (!(n & 1))
        return cout << (n / 2 - cne) + (n / 2 - cno) << endl, void();

    int ans = INT_MAX;
    for (int i = n; i >= 1; i--)
    {
        // cout << "i = " << i << " " << s[i - 1] << endl;
        if (i & 1)
            mo[s[i - 1]]--;
        else
            me[s[i - 1]]--;

        int mxe = 0, mxo = 0;
        for (char x = 'a'; x <= 'z'; x++)
        {
            mxe = max(mxe, mee[x] + me[x]);
            mxo = max(mxo, moo[x] + mo[x]);
        }
        ans = min(ans, (n / 2 - mxe) + (n / 2 - mxo) + 1);
        if (i & 1)
            mee[s[i - 1]]++;
        else
            moo[s[i - 1]]++;
    }

    cout << ans << endl;



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
