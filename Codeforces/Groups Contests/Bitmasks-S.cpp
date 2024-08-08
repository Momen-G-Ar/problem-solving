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

// Website: Codeforces
// Problem: Bitmasks - S
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

void solve(int T) 
{   
    long long l, r; cin >> l >> r;
    bitset <64> ll(l), rr(r), ans = rr;
    bool flag = 0;
    for(int i = 63; i >= 0; i--)
    {
        if(rr[i] || flag)
        {
            bitset <64> x = rr;
            x[i] = 0;
            for(int j = i - 1; j >= 0; j--)
                x[j] = 1;
            long long xx = x.to_ullong();
            if(xx >= l && xx <= r && x.count() >= ans.count() && ans.to_ullong() > xx)
                ans = x;
            x = rr;
            for(int j = i; j >= 0; j--)
                x[j] = 1;
            xx = x.to_ullong();
            if(xx >= l && xx <= r && x.count() >= ans.count() && ans.to_ullong() > xx)
                ans = x;

            flag = 1;
        }
    }
    cout << ans.to_ullong() << '\n';
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
