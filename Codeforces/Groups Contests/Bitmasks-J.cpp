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
// Problem: Bitmasks - J
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

void solve(int T) 
{   
    string s; cin >> s;
    int cnt1 = 0, cnt0 = 0, ct0 = 0, ct1 = 0;
    for(char c: s)
    {
        ct0 += c == '0';
        ct1 += c == '1';
        if(c == '1' && ct0)
        {
            cnt0++;
            ct1++;
            ct0 = 0;
        }
        else if(c == '0' && ct1)
        {
            cnt1++;
            ct0++;
            ct1 = 0;
        }
    }
    if(ct0)
        cnt0++;
    if(ct1)
        cnt1++;

    if(cnt1 == 0 || cnt0 == 0)
        return printf("%d\n", (cnt1 == 0)), void();

    printf("%d\n", min(cnt0, 2));
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
