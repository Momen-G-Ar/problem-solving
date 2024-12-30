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

// File creation time: Sun 12/15/2024 16:46:12.18
// Website: Codeforces
// Problem: 993 - D

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n), sp;
    map <int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    for (auto i = 1; i <= n; i++)
    {
        if (!m.count(i))
            sp.emplace_back(i);
    }
    vector <int> vis(n + 1);
    for (int i = 0; i < n; i++)
    {
        // cout << v[i] << " " << vis[v[i]] << endl;
        if (!vis[v[i]])
            cout << v[i] << " ";
        else
        {
            cout << sp.back() << " ";
            sp.pop_back();
        }
        vis[v[i]] = true;
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

    int t = 1;  cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
