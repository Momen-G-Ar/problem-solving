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
int dx[] = { 0, 1, 0, -1};
int dy[] = { -1, 0, 1, 0};

// File creation time: Sat 03/08/2025 11:37:16.59
// Website: Codeforces
// Problem: 174 - B

void solve(int T)
{
    int n, m; cin >> n >> m;
    vector v(n, vector <int> (m));
    map <int, int> mm;
    for (auto &x : v) {
        for (int &i : x) {
            cin >> i;
            mm[i] = 0;
        }
    }
    auto valid = [&](int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    };

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < 4; ++k) {
                int x = dx[k] + i, y = dy[k] + j;
                if (valid(x, y) && v[x][y] == v[i][j])
                    mm[v[x][y]] = 1;
            }
        }
    }

    int y = 0, z = 0;
    for (auto [f, s] : mm) {
        if (s == 0) {
            y++;
        } else {
            z++;
        }
    }

    if (y == 0) {
        cout << (mm.size() - 1) * 2 << endl;
    } else if (z == 0) {
        cout << y - 1 << endl;
    } else {
        cout << y + ((z - 1) * 2) << endl;
    }
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
