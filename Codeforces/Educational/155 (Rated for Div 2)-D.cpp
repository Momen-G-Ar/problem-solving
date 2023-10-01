////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 7, mod = 998244353;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

#define int long long

// Website: Codeforces
// Problem: Educational 155 (Rated for Div 2) - D

int add(int a, int b)
{
    return ((a % mod) + (b % mod)) % mod;
}

int sub(int a, int b)
{
    return ((((a % mod) - (b % mod)) % mod) + mod) % mod;
}

int mult(int a, int b)
{
    return ((a % mod) * (b % mod)) % mod;
}

void solve(int T) 
{   
    int n; cin >> n;
    int a[n + 1][30];
    memset (a, 0, sizeof a);
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        for(int j = 0; j < 30; j++)
        {
            a[i][j] += a[i - 1][j];
            if((1LL << j) & x)
                a[i][j]++;
        }
    }

    int ans = 0;
    long long sum[2][n + 1], cnt[2][n + 1];
    memset (sum, 0, sizeof sum);
    memset (cnt, 0, sizeof cnt);
    cnt[0][0] = 1LL;
    for(int i = 0; i < 30; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            bool parity = (a[j][i] & 1);
            sum[parity][j] = j + sum[parity][j - 1];
            sum[parity ^ 1][j] = sum[parity ^ 1][j - 1];
            cnt[parity][j] = 1 + cnt[parity][j - 1];
            cnt[parity ^ 1][j] = cnt[parity ^ 1][j - 1];

            long long solution = mult(j, cnt[1 ^ parity][j]);
            solution = sub(solution, sum[1 ^ parity][j]);
            solution = mult(solution, (1LL << i));
            ans = add(solution, ans);
        }
    }
    printf("%lld\n", ans);
}   

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);
    #endif

    int t = 1;  //cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
