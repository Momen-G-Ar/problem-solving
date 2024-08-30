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

// File creation time: Sun 11/26/2023 16:44:42.86
// Website: Codeforces
// Problem: 911 (Div 2) - B

vector <vector <vector <int>>> dp1, dp2, dp3;

int calcA(int a, int b, int c)
{
    if (b == 0 && c == 0)
        return true;

    int &ans = dp1[a][b][c];
    if (~ans)
        return ans;
    ans = 0;
    if (a && b)
        ans |= calcA(a - 1, b - 1, c + 1);
    if (a && c)
        ans |= calcA(a - 1, b + 1, c - 1);
    if (b && c)
        ans |= calcA(a + 1, b - 1, c - 1);
    return ans;
}

int calcB(int a, int b, int c)
{
    if (a == 0 && c == 0)
        return true;

    int &ans = dp2[a][b][c];
    if (~ans)
        return ans;
    ans = 0;
    if (a && b)
        ans |= calcB(a - 1, b - 1, c + 1);
    if (a && c)
        ans |= calcB(a - 1, b + 1, c - 1);
    if (b && c)
        ans |= calcB(a + 1, b - 1, c - 1);
    return ans;
}

int calcC(int a, int b, int c)
{
    if (a == 0 && b == 0)
        return true;

    int &ans = dp3[a][b][c];
    if (~ans)
        return ans;
    ans = 0;
    if (a && b)
        ans |= calcC(a - 1, b - 1, c + 1);
    if (a && c)
        ans |= calcC(a - 1, b + 1, c - 1);
    if (b && c)
        ans |= calcC(a + 1, b - 1, c - 1);
    return ans;
}

void solve(int T)
{
    int a, b, c; cin >> a >> b >> c;
    int aa = calcA(a, b, c);
    int bb = calcB(a, b, c);
    int cc = calcC(a, b, c);
    cout << aa << " " << bb << " " << cc << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif
    dp1.assign(205, vector <vector <int>> (205, vector <int> (205, -1)));
    dp2.assign(205, vector <vector <int>> (205, vector <int> (205, -1)));
    dp3.assign(205, vector <vector <int>> (205, vector <int> (205, -1)));
    int t = 1;  cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
