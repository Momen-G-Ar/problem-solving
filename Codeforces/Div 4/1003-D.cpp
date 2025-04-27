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
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sun 02/09/2025 17:05:03.75
// Website: Codeforces
// Problem: 1003 - D

bool comp(vector <int>& v1, vector <int>& v2) {
    int sum1 = 0, sum2 = 0;
    for (auto x : v1)
        sum1 += x;
    for (auto x : v2)
        sum2 += x;
    if (sum1 != sum2)
        return sum1 > sum2;
    return v1 > v2;
}

void solve(int T)
{
    int n, m; cin >> n >> m;
    vector<pair<int, vector<int>>> v (n, {0, vector<int> (m)});
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> v[i].second[j], v[i].first += v[i].second[j];
    sort(v.rbegin(), v.rend());
    vector<int> v2 (n * m);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            v2[i * m + j] = v[i].second[j];
    for (auto x : v2)
        cout << x << " ";
    cout << endl;
    for (int i = 1; i < n * m; ++i)
        v2[i] += v2[i - 1];
    long long ans = 0;
    for (int i = 0; i < n * m; ++i)
        ans += v2[i];
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
