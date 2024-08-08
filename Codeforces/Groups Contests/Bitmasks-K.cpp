////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 2e5 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// Website: Codeforces
// Problem: Bitmasks - K
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

int p[N][32];

void solve(int T) 
{   
    int l, r; cin >> l >> r;
    int ans = 0;
    for(int i = 0; i < 32; i++)
    {
        int sum = p[r][i] - p[l - 1][i];
        ans = max(ans, sum);
    }
    printf("%d\n", (r - l + 1) - ans);
}   

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);
    #endif

    for(int i = 1; i <= N; ++i)
    {
        for(int j = 0; j < 32; j++)
        {
            p[i][j] = p[i - 1][j];
            if((1 << j) & i)
                p[i][j]++;
        }
    }


    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
