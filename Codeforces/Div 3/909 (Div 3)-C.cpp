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

// File creation time: Fri 11/17/2023 17:00:52.64
// Website: Codeforces
// Problem: 909 (Div 3) - C

int maxSubArray(vector <int> &v)
{
    int mx = *max_element(begin(v), end(v));
    if(mx < 0)
        return mx;
    int sum = 0, ans = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(sum + v[i] >= 0)
        {
            sum += v[i];
            ans = max(ans, sum);
        }
        else
        {
            ans = max(ans, sum);
            sum = 0;
        }
    }
    ans = max(ans, sum);
    return ans;
}

void solve(int T) 
{   
    int n; cin >> n;
    vector <int> v(n);
    for(int &i: v)
        cin >> i;

    vector <vector <int>> vv;
    vector <int> t(1, v[0]);
    for(int i = 1; i < n; i++)
    {
        if((abs(t.back()) % 2 == 1) ^ (abs(v[i]) % 2 == 1))
        {
            t.emplace_back(v[i]);
        }
        else
        {
            vv.emplace_back(t);
            t.assign(1, v[i]);
        }
    }

    if(t.size())
        vv.emplace_back(t);

    int ans = -1e5;
    for(vector <int> tt: vv)
        ans = max(ans, maxSubArray(tt));
    cout << ans << '\n';
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
