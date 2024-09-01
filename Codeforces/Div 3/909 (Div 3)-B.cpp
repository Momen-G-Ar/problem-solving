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
#define int long long

// File creation time: Fri 11/17/2023 16:39:12.55
// Website: Codeforces
// Problem: 909 (Div 3) - B

void solve(int T) 
{   
    int n; cin >> n;
    vector <long long> v(n);
    long long mn = LONG_LONG_MAX, mx = 0;
    for(long long &i: v)
        cin >> i, mn = min(mn, i), mx = max(mx, i);

    for(int i = 1; i < n; i++)
        v[i] += v[i - 1];

    long long ans = 0;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            long long mxSum = 0, mnSum = LONG_LONG_MAX;
            for(int j = 0, k = i - 1; k < n; j += i, k += i)
            {
                // cout << j << " " << k << endl;
                if(j - 1 >= 0)
                {
                    mxSum = max(mxSum, v[k] - v[j - 1]);
                    mnSum = min(mnSum, v[k] - v[j - 1]);
                }
                else
                {
                    mxSum = max(mxSum, v[k]);
                    mnSum = min(mnSum, v[k]);
                }
            }
            // cout << mxSum - mnSum << endl;
            ans = max(ans, mxSum - mnSum);
        }
    }
    cout << max(ans, mx - mn) << endl;


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
