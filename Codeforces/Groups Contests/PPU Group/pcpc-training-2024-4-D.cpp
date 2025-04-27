////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { 0, 0, 1, -1};
int dy[] = { 1, -1, 0, 0};
char dir[4] = {'R', 'L', 'D', 'U'};
// File creation time: Thu 10/10/2024 21:20:57.02
// Website: Codeforces
// Problem: pcpc-training-2024-4 - D

pair <int, int> b[10] = {{6, 6}, {6, 7}, {7, 6}, {7, 7}, {10, 2}, {9, 2}, {9, 3}, {9, 10}, {9, 11}, {10, 11}};
pair <int, int> c[4] = {{3, 3}, {10, 10}, {3, 10}, {10, 3}};

bool isBlocked(int x, int y)
{
    for (auto [f, s] : b)
    {
        if (f == x && s == y)
            return true;
    }
    if (x > 12 || x <= 0 || y > 12 || y <= 0)
        return true;
    return false;
}

bool isCrossed(int x, int y)
{
    for (auto [f, s] : c)
    {
        if (f == x && s == y)
            return true;
    }
    return false;
}

void solve(int T)
{
    int sx, sy; cin >> sx >> sy;
    queue <pair <pair <int, int>, int>> q;
    vector vis(13, vector <char> (13, '_'));
    q.push({{sx, sy}, 0});
    int ans = 0, resx, resy;
    while (true)
    {
        auto [pos, lvl] = q.front(); q.pop();
        if (isCrossed(pos.first, pos.second))
        {
            ans = lvl;
            resx = pos.first;
            resy = pos.second;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            int x = dx[i] + pos.first, y = dy[i] + pos.second;
            if (!isBlocked(x, y) && vis[x][y] == '_')
            {
                q.push({{x, y}, lvl + 1});
                vis[x][y] = dir[i];
            }
        }
    }
    int i = resx, j = resy;
    cout << ans << endl;
    // cout << sx << " " << sy << endl;
    // cout << resx << " " << resy << endl << endl;
    vector <char> temp;
    while (sx != i || sy != j)
    {
        // cout << i << " " << j << " " << vis[i][j] << endl;
        temp.emplace_back(vis[i][j]);
        if (vis[i][j] == 'U')
            i++;
        else if (vis[i][j] == 'D')
            i--;
        else if (vis[i][j] == 'R')
            j--;
        else
            j++;
    }
    reverse(temp.begin(), temp.end());
    for (char c : temp)
        cout << c;
    cout << endl;
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
