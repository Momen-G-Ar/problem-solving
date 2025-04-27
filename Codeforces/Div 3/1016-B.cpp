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

// File creation time: Tue 04/08/2025 17:41:57.20
// Website: Codeforces
// Problem: 1016 - B

void solve(int T)
{
    string s; cin >> s;
    if (count(s.begin(), s.end(), '0') == 0)
        return cout << s.size() - 1 << endl, void();

    int ans = 0;
    bool x = false;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (!x && s[i] != '0') {
            x = true;
        }
        else if (!x && s[i] == '0') {
            ans++;
        } else if (x && s[i] != '0') {
            ans++;
        }
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

    int t = 1;  cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
