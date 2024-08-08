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
// Problem: Graph Problems contest#1 F
// url: https://codeforces.com/group/ibNhxWfOek/contests

int depth(vector <vector <int>> &adj)
{
    queue <pair <int, int>> q;
    q.push({1, 0});
    int ans = 0;
    while(q.size())
    {
        auto [top, depth] = q.front(); q.pop();
        for(int ch: adj[top])
        {
            q.push({ch, depth + 1});
            ans = max(ans, depth + 1);
        }
    }
    return ans;
}

void solve(int T) 
{
    int n; cin >> n;
    vector <int> v(n);
    for(int &x: v)
        cin >> x;
    vector <vector <int>> adj(n + 1, vector <int> ({}));
    int l = 0, r = 2;
    adj[1].emplace_back(v[1]);
    while(l < n && r < n)
    {   
        if(v[r] > v[r - 1])
        {
            adj[v[l]].emplace_back(v[r]);
            r++;
        }
        else
        {
            l++;
            adj[v[l]].emplace_back(v[r]);
            r++;
        }
    }
    
    printf("%d\n", depth(adj));
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/output.txt","w",stdout);   
    #endif

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}