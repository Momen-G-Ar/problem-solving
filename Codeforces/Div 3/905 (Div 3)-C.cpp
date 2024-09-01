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

// File creation time: Sun 10/22/2023 14:29:04.24
// Website: Codeforces
// Problem: 905 (Div 3) - C

void solve(int T) 
{   
    int n, k; cin >> n >> k;
    vector <int> v(n);
    int ans = k, go = 1, cnte = 0, cnto = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] & 1)
            cnto++;
        else
            cnte++;
        if(go)
        {
            if(v[i] % k == 0)
            {
                ans = 0;
                go = 0;
            }
            ans = min(ans, k - (v[i] % k));
        }
    }
    if(k == 4)
    {
        if(cnte >= 2)
            ans = min(ans, 0);
        else if(cnte == 1)
            ans = min(ans, 1);
        else
            ans = min(ans, 2);
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
