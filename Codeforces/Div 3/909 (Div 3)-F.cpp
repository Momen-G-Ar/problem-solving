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

// File creation time: Fri 11/17/2023 18:48:13.32
// Website: Codeforces
// Problem: 909 (Div 3) - F

void solve(int T) 
{   
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n - 1; i++)
        cout << i << " " << i + 1 << '\n';

    int u = n - 1;
    for(int i = 0; i < q; i++)
    {
        int x; cin >> x;
        if(x == u)
            cout << "-1 -1 -1\n";
        else
        {
            cout << n << " " << u << " " << x << '\n';
            u = x;
        }
    }
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
