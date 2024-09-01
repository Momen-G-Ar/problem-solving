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

// File creation time: Mon 01/15/2024 16:52:10.69
// Website: Codeforces
// Problem: 920 (Div 3) - C

void solve(int T) 
{   
    long long n, f, a, b; cin >> n >> f >> a >> b;
    vector <long long> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    long long sum = 0, t = 0;
    for(int i = 0; i < n; i++)
    {
        sum += min((v[i] - t) * a, b);
        t = v[i];
        if(sum >= f)
            return cout << "NO\n", void();

    }
    cout << "YES\n";


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
