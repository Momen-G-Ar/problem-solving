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
// Problem: Bitmasks - D
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

int cnt(long long x)
{
    int ans = 0;
    while(x)
    {
        ans++;
        x /= 10;
    }
    return ans;
}

void solve(int T) 
{   
    queue <long long> q;
    q.push(4); q.push(7);
    vector <long long> v;
    while(q.size())
    {
        long long top = q.front(); q.pop();
        v.emplace_back(top);
        if(cnt(top) < 10)
        {
            q.push(top * 10 + 4);
            q.push(top * 10 + 7);
        }
    }
    int x; cin >> x;
    int ans = lower_bound(begin(v), end(v), x) - v.begin() + 1;
    printf("%d\n", ans);
}   

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);
    #endif

    int t = 1;  //cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
