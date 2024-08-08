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
// Problem: Bitmasks - F
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

void solve(int T) 
{   
    int n, k; cin >> n >> k;
    vector <int> v(n), cnt(31);
    for(int &i: v)
    {
        cin >> i;
        for(int j = 0; j <= 30; j++)
        {
            if((1LL << j) & i)
                cnt[j]++;
        }
    }

    int ans = 0;
    for(int i = 30; i >= 0; i--)
    {
        if(n - cnt[i] <= k)
        {
            ans |= (1LL << i);
            k -= (n - cnt[i]);
        }
    }
    printf("%d\n", ans);
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
