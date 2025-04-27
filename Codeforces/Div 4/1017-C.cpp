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

// File creation time: Sun 04/13/2025 18:46:42.48
// Website: Codeforces
// Problem: 1017 - C

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(2 * n);
    set <int> s;
    for (int i = 1; i <= 2 * n; i++)
        s.insert(i);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x; cin >> x;
            if (s.count(x))
                s.erase(x);
            v[i + j - 1] = x;
        }
    }
    v[0] = *s.begin();
    for (int i : v) {
        cout << i << " ";
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
