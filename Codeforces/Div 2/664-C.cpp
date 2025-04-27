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

const long long N = 2e2 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sun 03/09/2025 11:47:41.37
// Website: Codeforces
// Problem: 664 - C

vector <int> a, b;
vector <vector <int>> dp;
int n, m;

int calc(int i, int res) {
    if (i == n)
        return res;
    int &ans = dp[i][res];
    if (~ans)
        return ans;
    ans = 2000;
    for (int j = 0; j < m; ++j) {
        ans = min(ans, calc(i + 1, res | (a[i] & b[j])));
    }
    return ans;
}

void solve(int T)
{
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    dp.assign(n, vector <int> (1 << 9 + 1, -1));
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    cout << calc(0, 0) << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
