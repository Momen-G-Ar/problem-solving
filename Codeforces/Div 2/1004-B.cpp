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

// File creation time: Sun 03/09/2025 13:12:14.52
// Website: Codeforces
// Problem: 1004 - B

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n), freq(n + 2);
    int mx = -1, mn = 2000;
    for (int &i : v) {
        cin >> i;
        freq[i]++;
        mx = max(i, mx);
        mn = min(i, mn);
    }
    while (mn <= mx) {
        if (freq[mn] == 1)
            return cout << "NO\n", void();
        if (freq[mn] >= 2) {
            freq[mn + 1] += freq[mn] - 2;
            freq[mn] = 2;
        }
        mn++;
    }
    cout << "YES\n";


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
