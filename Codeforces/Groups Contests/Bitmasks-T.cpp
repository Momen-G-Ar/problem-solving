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
// Problem: Bitmasks - T
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

void solve(int T) 
{   
    int n; cin >> n;
    vector <int> v(n);
    vector <vector <int>> q(32, vector <int> ({}));
    map <int, int> m;
    for(int &i: v)
    {
        cin >> i;
        m[i]++;
        for(int j = 0; j < 32; j++)
        {
            if(i & (1LL << j))
                q[j].emplace_back(i);
        }
    }

    vector <int> ans;
    int res = 0;
    for(int i = 31; i >= 0; i--)
    {
        if(q[i].size() == 0 || (res & (1LL << i)))
            continue;
        int t = res, val = -1;
        for(int j = 0; j < q[i].size(); j++)
        {
            if((res | q[i][j]) > t)
            {
                t = (res | q[i][j]);
                val = q[i][j];
            }
        }
        res = t;
        m[val]--;
        ans.emplace_back(val);
    }

    for(auto [f, s]: m)
    {
        while(s--)
            ans.emplace_back(f);
    }
    for(auto x: ans)
        cout << x << " ";
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
