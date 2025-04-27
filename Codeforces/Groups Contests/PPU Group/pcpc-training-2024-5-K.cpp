////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long N = 1e2 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sat 10/12/2024  9:17:38.16
// Website: Codeforces
// Problem: pcpc-training-2024-5 - K

vector <vector <int>> v = {
    {1, 1, 1, 0, 1, 1, 1}, // 0
    {0, 0, 1, 0, 0, 1, 0}, // 1
    {1, 0, 1, 1, 1, 0, 1}, // 2
    {1, 0, 1, 1, 0, 1, 1}, // 3
    {0, 1, 1, 1, 0, 1, 0}, // 4
    {1, 1, 0, 1, 0, 1, 1}, // 5
    {1, 1, 0, 1, 1, 1, 1}, // 6
    {1, 0, 1, 0, 0, 1, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1} // 9
};

int n, x, y;
string s, t;
int test = 0;
int dp[N][N][N];
int vis[N][N][N];
// del  add
pair <int, int> sTot(char c, char a)
{
    auto cc = v[c - '0'];
    auto aa = v[a - '0'];
    pair <int, int> ans = {0, 0};
    for (int i = 0; i < 7; i++)
    {
        if (cc[i] != aa[i])
        {
            ans.first += (cc[i] == 1);
            ans.second += (cc[i] == 0);
        }
    }
    return ans;
}

bool calc(int i, int xx, int yy)
{
    if (i == n)
        return true;
    if (vis[i][xx][yy] == test)
        return dp[i][xx][yy];
    vis[i][xx][yy] = test;
    dp[i][xx][yy] = false;

    for (char c = '0' + (i == 0); c <= '9'; c++)
    {
        auto [f1, s1] = sTot(s[i], c);
        auto [f2, s2] = sTot(t[i], c);

        if (xx >= (f1 + f2) && yy >= (s1 + s2))
            dp[i][xx][yy] |= calc(i + 1, xx - (f1 + f2), yy - (s1 + s2));
    }

    return dp[i][xx][yy];
}

void solve(int T)
{
    test++;
    cin >> n >> x >> y;
    cin >> s >> t;
    bool res = calc(0, x, y);
    cout << (res ? "YES\n" : "NO\n");
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
