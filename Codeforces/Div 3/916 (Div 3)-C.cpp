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

// File creation time: Wed 12/27/2023 10:11:19.11
// Website: Codeforces
// Problem: 916 (Div 3) - C

void solve(int T) 
{   
    int n, k; cin >> n >> k;
    vector <long long> a(n), b(n);
    for(long long &i: a)
        cin >> i;
    for(long long &i: b)
        cin >> i;

    long long ans = 0, com = 0, mx = 0;
    for(int i = 1; i <= min(n, k); i++)
    {
        mx = max(b[i - 1], mx);
        com += a[i - 1];
        ans = max(ans, com + (k - i) * mx);
    }
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
