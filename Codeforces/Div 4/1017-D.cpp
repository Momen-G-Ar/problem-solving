////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cout<<"[" << #x <<":"<< x <<"]"<<endl;

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sun 04/13/2025 18:53:35.02
// Website: Codeforces
// Problem: 1017 - D

void solve(int T)
{
    string s, p; cin >> p >> s;
    int ss = 0, pp = 0, cnts = 0, cntp = 0;
    while (ss != s.size() || pp != p.size()) {
        if (s[ss] != p[pp])
            return cout << "NO\n", void();
        cnts = 0, cntp = 0;
        int t = ss;
        while (s[t] == s[ss]) {
            t++;
            cnts++;
        }
        ss = t;
        t = pp;
        while (p[t] == p[pp]) {
            t++;
            cntp++;
        }
        pp = t;
        if (2 * cntp < cnts || cntp > cnts) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
    cerr << "Momin-Arafa" << endl;

    return 0;
}
