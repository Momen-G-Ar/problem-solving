////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long N = 2e3 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 10/15/2024 22:41:04.89
// Website: Codeforces
// Problem: pcpc-training-2024-6 - D
//     k  n
int dp[N][N];

int div(int n)
{
    int ans = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans++;
            if (n / i != i)
                ans++;
        }
    }
    return ans;
}

// n = 2, k = 1
// [1], [2]
//

void pre()
{
    for (int i = 0; i < N; i++)
        dp[i][1] = 1;
    for (int i = 1; i < N; i++) //
    {
        for (int j = 2; j < N; j++) //
        {
            dp[i][j] += dp[i][j - 1] + ((div(j) - 1) * (i - 1) + 1);
        }
    }
}
// k = 4, n = 4
//1 [1, 1, 1, 1][1, 1, 1, 2][1, 1, 2, 2][1, 2, 2, 2][1, 1, 1, 3][1, 1, 3, 3][1, 3, 3, 3][1, 1, 1, 4][1, 1, 4, 4][1, 4, 4, 4][1, 1, 1, 5][1, 1, 5, 5][1, 5, 5, 5][1, 1, 1, 6][1, 1, 6, 6][1, 6, 6, 6]
//2 [2, 2, 2, 2][2, 2, 2, 4][2, 2, 4, 4][2, 4, 4, 4][2, 2, 2, 6][2, 2, 6, 6][2, 6, 6, 6]
//3 [3, 3, 3, 3][3, 3, 3, 6][3, 3, 6, 6][3, 6, 6, 6]
//4 [4, 4, 4, 4]
//5 [5, 5, 5, 5]
//6 [6, 6, 6, 6]
void solve(int T)
{
    int n, k; cin >> n >> k;
    cout << dp[4][6] << endl;



}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif
    pre();
    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
