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
// Problem: 898 (Div. 4) - H

int n, a, b; 

int detectCycle(int nd, int par, vector <vector <int>> &adj, vector <bool> &vis) 
{
    if(vis[nd])
        return nd;

    vis[nd] = true;
    int fnd = -1;
    for(int ch: adj[nd])
    {
        if(ch != par)
        {
            int x = detectCycle(ch, nd, adj, vis);
            if(x == b)
                fnd = b;
            if(fnd != b && x != -1 && fnd == -1)
                fnd = x;
        }
    }
    return fnd;
} 

int BFS(int nd, int distination, vector <vector <int>> &adj)
{
    vector <bool> vis(n + 1, false);
    queue <pair <int, int>> q;
    q.push({nd, 0});
        
    while(q.size())
    {
        auto [top, lvl] = q.front(); q.pop();
        if(top == distination)
            return lvl;
        vis[top] = true;
        for(int ch: adj[top])
        {
            if(!vis[ch])
                q.push({ch, lvl + 1});
        } 
    }
    return -1;
}

void solve(int T) 
{
    cin >> n >> a >> b;
    vector <vector <int>> adj(n + 1, vector <int> ({}));
    for(int i = 0; i < n; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    if(a == b)
        return printf("NO\n"), void();
    vector <bool> vis(n + 1, false);
    int startCycle = detectCycle(b, -1, adj, vis); // find if there is a cycle and where it begins
    if(startCycle == b) // if b in cycle then yes
        return printf("YES\n"), void();

    // Find the distance to reach the start of the cycle from a and from b and compare
    int disFromA = BFS(a, startCycle, adj);
    int disFromB = BFS(b, startCycle, adj);
    printf("%s\n", (disFromA > disFromB? "YES": "NO"));
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