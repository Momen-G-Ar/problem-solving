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

// File creation time: Sat 10/12/2024 10:11:00.55
// Website: Codeforces
// Problem: pcpc-training-2024-5 - G

void solve(int T)
{
    int n, x; cin >> n >> x;
    string s, t; cin >> s >> t;
    int i = n - (x % n), j = 0, ans = 0;
    while (j < n)
    {
        ans += (s[i] != t[j]);
        i++, j++;
        i %= n;
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

    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);
    cerr << "Momin-Arafa" << endl;

    return 0;
}
