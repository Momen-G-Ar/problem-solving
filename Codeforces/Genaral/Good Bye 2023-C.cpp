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

// File creation time: Sat 12/30/2023 17:36:21.65
// Website: Codeforces
// Problem: Good Bye 2023 - C

void solve(int T) 
{   
    int n; cin >> n;
    vector <int> v(n);
    for(int &i: v)
        cin >> i;
    long long o = (v[0] & 1) * 1LL, sum = v[0];
    cout << v[0] << " ";
    for(int i = 1; i < n; i++)
    {
        sum += v[i]; 
        o += (v[i] & 1);
        cout << sum - (o / 3 + (o % 3 == 1)) << " ";
    }
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
