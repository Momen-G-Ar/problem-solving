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

// File creation time: Fri 11/17/2023 18:04:35.16
// Website: Codeforces
// Problem: 909 (Div 3) - E

void solve(int T) 
{   
    int n; cin >> n;
    vector <int> v(n);
    int mn = INT_MAX;
    for(int &i: v)
        cin >> i, mn = min(mn, i);

    vector <int> t;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == mn)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(v[j] >= v[j - 1])
                    t.emplace_back(v[j]);                    
                else
                    return cout << "-1\n", void();
            }
            break;
        }
        else
            ans++;
    }
    cout << ans << endl;
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
