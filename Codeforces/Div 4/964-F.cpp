////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

const long long N = 4e5 + 7, mod = 1e9 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};
#define int long long
// File creation time: Sat 08/10/2024 18:22:32.86
// Website: Codeforces
// Problem: 964 - F
int fact[N], inv[N];

int mul(int a , int b)
{
    return ((a % mod) * (b % mod)) % mod;
}

int add(int a , int b)
{
    return ((a % mod) + (b % mod)) % mod;
}

int power(int x, int y)
{
    int res = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
            res = mul(res, x);
        y = y >> 1;
        x = mul(x, x);
    }
    return res;
}

void cal()
{
    fact[0] = inv[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = mul(fact[i - 1], i);
        inv[i] = power(fact[i], mod - 2);
    }
}

int nCk(int n, int k)
{
    return mul(fact[n], mul(inv[n - k], inv[k]));
}

void solve(int T)
{
    int n, k; cin >> n >> k;
    int o = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        z += (x == 0);
        o += (x == 1);
    }

    int atLeastOnes = k / 2 + 1;
    if (o < atLeastOnes)
        return cout << "0\n", void();

    int ans = 0, x = atLeastOnes, mustBeZeros, mustBeOnes;
    while (x <= o && x <= k)
    {
        if (k - x <= z)
        {
            mustBeZeros = nCk(z, k - x);
            mustBeOnes = nCk(o, x);
            ans = add(ans, mul(mustBeOnes, mustBeZeros));
        }
        x++;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif
    cal();
    auto start = high_resolution_clock::now();
    int t = 1;  cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration_ms = duration_cast<milliseconds>(stop - start);
    auto duration_mcs = duration_cast<microseconds>(stop - start);
    cerr << "Runtime:" << duration_ms.count() << "Milli-Second." << endl;
    cerr << "Runtime:" << duration_mcs.count() << "Micro-Second." << endl;

    return 0;
}
