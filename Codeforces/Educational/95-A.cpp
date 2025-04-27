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

const long long N = 2e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Fri 04/11/2025 22:01:16.56
// Website: Codeforces
// Problem: 95 - A

int dp[N][2];
int n;

int calc(int i, int turn, vector <int> &v) {
    if (i == n)
        return 0;
    int &ans = dp[i][turn];
    if (~ans)
        return ans;
    ans = INT_MAX;
    ans = min(ans, turn * v[i] + calc(i + 1, !turn, v));
    if (i + 1 < n)
        ans = min(ans, turn * (v[i] + v[i + 1]) + calc(i + 2, !turn, v));
    return ans;
}

void solve(int T)
{
    cin >> n;
    vector <int> v(n);
    for (int &i : v) {
        cin >> i;
    }
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < 2; j++)
            dp[i][j] = -1;
    int ans = calc(0, 1, v);
    cout << ans << endl;
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
