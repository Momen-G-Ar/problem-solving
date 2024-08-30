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

// File creation time: Sat 10/28/2023 16:42:12.97
// Website: Codeforces
// Problem: 906 (Div 2) - B

bool check(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            return false;
    }
    return true;
}

void solve(int T)
{
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    bool ss = check(s), tt = check(t);
    if (!ss && !tt)
        return printf("No\n"), void();
    if (ss)
        return printf("Yes\n"), void();
    bool z = 0, o = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        o |= ((s[i] == s[i + 1]) && (s[i] == '1'));
        z |= ((s[i] == s[i + 1]) && (s[i] == '0'));
    }

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1] && (t[0] == s[i] || t[m - 1] == s[i + 1]))
            return printf("No\n"), void();
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
