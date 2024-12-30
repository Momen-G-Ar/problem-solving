////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 12/05/2023 17:09:40.41
// Website: Codeforces
// Problem: 913 (Div 3) - C

void solve(int T) 
{   
    int n; cin >> n;
    string s; cin >> s;

    int mx = 0;
    map <char, int> mp;
    for(char c: s)
        mp[c]++, mx = max(mx, mp[c]);
    int ans = 0;
    if(n - mx < mx)
        ans += n - (2 * (n - mx));
    else
        ans += (n & 1);
    cout << ans << '\n';
}   

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);
    #endif

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}