////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 10/15/2024 21:26:46.15
// Website: Codeforces
// Problem: pcpc-training-2024-6 - J

void solve(int T)
{
    int n, k; cin >> n >> k;
    if (n == 1)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    set <pair <int, int>> s;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        s.insert({x, i});
    }
    // for (auto [f, s] : s)
    //     cout << f << " " << s << endl;
    vector <pair <int, int>> ans;
    while (k--)
    {
        auto mx = *s.rbegin(), mn = *s.begin();
        if (mn.first == mx.first)
            break;
        s.erase(mn);
        s.erase(mx);
        mx.first--;
        mn.first++;

        s.insert(mn);
        s.insert(mx);
        ans.emplace_back(mx.second + 1, mn.second + 1);
    }
    auto mx = *s.rbegin(), mn = *s.begin();
    cout << (mx.first - mn.first) << " " << ans.size() << endl;
    for (auto [f, s] : ans)
        cout << f << " " << s << endl;
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
