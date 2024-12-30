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

// File creation time: Sat 09/21/2024 18:21:22.28
// Website: Codeforces
// Problem: 974 - C

bool BS(int sum, int mid, int n, vector <int> &v)
{
    double avg = (sum * 1.0 + mid) / (1.0 * n);
    int cnt = 0;
    v[n - 1] += mid;
    for (int i : v)
        cnt += (i < (avg / 2.0));
    v[n - 1] -= mid;
    return cnt > (n / 2);
}

void solve(int T)
{
    cout << fixed;
    int n; cin >> n;
    vector <int> v(n);
    int sum = 0;
    for (int &i : v)
        cin >> i, sum += i;
    sort(begin(v), end(v));
    int l = 0, r = 1e15;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (BS(sum, mid, n, v))
            r = mid - 1;
        else
            l = mid + 1;
    }
    if (l == 1e15 + 1)
        cout << -1 << endl;
    else
        cout << l << endl;
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
