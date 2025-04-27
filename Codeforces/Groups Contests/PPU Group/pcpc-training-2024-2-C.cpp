////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sat 10/05/2024 11:15:55.22
// Website: Codeforces
// Problem: pcpc-training-2024-2 - C

void solve(int T)
{
    // cout << "T = " << T << endl;
    int n, k; cin >> n >> k;
    if (k & 1)
        return cout << "No\n", void();
    vector <int> v(n + 1);
    for (int i = 1; i <= n; i++)
        v[i] = i;
    int r = n;
    for (int i = 1; i <= n / 2 && k > 0; i++)
    {
        if (2 * (r - i) <= k)
        {
            k -= 2 * (r - i);
            swap(v[i], v[r]);
            r--;
        }
        else
        {
            int x = k / 2;
            swap(v[i], v[i + x]);
            k = 0;
            break;
        }
    }
    if (k > 0)
        return cout << "No\n", void();

    cout << "Yes\n";
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;


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
