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
// Problem: Bitmasks - V
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

void solve(int T) 
{   
    int n; cin >> n;
    vector <int> v(n + 1);
    int cnte = 0, cnto = 0, cnt = 1;
    for(int i = 1; i <= n - 2; ++i)
    {
        v[i] = cnt + 2;
        if(i & 1)
            cnto ^= v[i];
        else
            cnte ^= v[i];
        cnt += 2;
    }
    v[n - 1] = 1000000;
    if((n - 1) & 1)
        cnto ^= v[n - 1];
    else
        cnte ^= v[n - 1];

    v[n] = (cnte ^ cnto);
    if(n & 1)
        cnto ^= v[n];
    else
        cnte ^= v[n];
    for(int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << '\n';
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
