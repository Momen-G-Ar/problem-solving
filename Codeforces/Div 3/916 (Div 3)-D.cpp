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

// File creation time: Wed 12/27/2023 10:28:47.64
// Website: Codeforces
// Problem: 916 (Div 3) - D

long long calc(priority_queue <pair<int, int>> pa, priority_queue <pair<int, int>> pb, priority_queue <pair<int, int>> pc)
{
    long long ans = 0LL;
    int a = -1, b = -1;
    ans += (1LL * pa.top().first);
    a = pa.top().second;
    
    while(pb.top().second == a)
        pb.pop();

    b = pb.top().second;
    ans += (1LL * pb.top().first);

    while(pc.top().second == b || pc.top().second == a)
        pc.pop();

    ans += (1LL * pc.top().first);
    return ans;
}

void solve(int T) 
{   
    int n; cin >> n;
    priority_queue <pair<int, int>> pa, pb, pc;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        pa.push({x, i});
    }
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        pb.push({x, i});
    }
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        pc.push({x, i});
    }

    long long ans = calc(pa, pb, pc);
    ans = max(ans, calc(pa, pc, pb));

    ans = max(ans, calc(pb, pa, pc));
    ans = max(ans, calc(pb, pc, pa));

    ans = max(ans, calc(pc, pa, pb));
    ans = max(ans, calc(pc, pb, pa));
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
