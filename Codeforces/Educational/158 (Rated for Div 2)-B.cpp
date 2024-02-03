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

// File creation time: Fri 11/24/2023 16:46:17.43
// Website: Codeforces
// Problem: 158 (Rated for Div 2) - B

void solve(int T) 
{   
    int n; cin >> n; 
    vector <int> v(n);
    for(int &i: v)
        cin >> i;
    long long lastTeleport = 1, sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(lastTeleport < v[i])
            sum += 1LL * (v[i] - lastTeleport);
        lastTeleport = v[i];
    }
    cout << sum << '\n';

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
