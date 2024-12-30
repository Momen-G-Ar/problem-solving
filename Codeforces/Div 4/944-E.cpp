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

// File creation time: Fri 08/30/2024 17:51:37.32
// Website: Codeforces
// Problem: 944 - E

vector <pair <pair <int, int>, pair <int, int>>> v;

bool BS(int mid, int x)
{
    return v[mid].first.first <= x;
}

int binary_search(int x, int l, int r)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (BS(mid, x))
            l = mid + 1;
        else
            r = mid - 1;
    }
    return r;
}
// v = d / t
void solve(int T)
{
    v.clear();
    int n, k, q; cin >> n >> k >> q;
    vector <int> a(k), b(k);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
            v.push_back({{0, a[i]}, {0, b[i]}});
        else
            v.push_back({{a[i - 1], a[i]}, {b[i - 1], b[i]}});
    }
    while (q--)
    {
        int x; cin >> x;
        int ind = binary_search(x, 0, v.size() - 1);

        x -= v[ind].first.first;
        int dis = v[ind].first.second - v[ind].first.first;
        int time = v[ind].second.second - v[ind].second.first;
        cout << (v[ind].second.first + (x * time / dis)) << ' ';
    }
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
