////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

const long long N = 1e5 + 7, mod = 1e9 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sun 09/01/2024 20:00:20.87
// Website: Codeforces
// Problem: 970 - F

int mul(int a, int b)
{
    return ((a % mod) * (b % mod)) % mod;
}

int add(int a, int b)
{
    return ((a % mod) + (b % mod)) % mod;
}

int sub(int a, int b)
{
    return (((a % mod) - (b % mod)) % mod + mod) % mod;
}

int pwr(int n, int p)
{
    int ans = 1;
    while (p)
    {
        if (p & 1)
            ans = mul(ans, n);
        n = mul(n, n);
        p >>= 1;
    }
    return ans;
}

int inv(int x)
{
    return pwr(x, mod - 2);
}

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
        cin >> v[i], sum = add(sum, v[i]);
    int size = mul(mul(n, n - 1), inv(2));
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum = sub(sum, v[i]);
        ans = add(ans, mul(v[i], sum));
    }
    ans = mul(ans, inv(size));
    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

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
