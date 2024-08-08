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
// Problem: Graph Problems contest#1 J
// url: https://codeforces.com/group/ibNhxWfOek/contests

void dfs(int node, vector <bool> &vis, vector <vector <int>> &adj)
{
    vis[node] = true;
    for(int ch: adj[node])
    {
        if(!vis[ch])
            dfs(ch, vis, adj);
    }
}

void solve(int T) 
{
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    vector <vector <int>> adj(n * m + 2, vector <int> ({}));
    for(int i = 1; i <= n; i++)
    {
        if(a[i - 1] == '<')
        {
            for(int j = m; j > 1; j--)
                adj[m * (i - 1) + j].emplace_back(m * (i - 1) + j - 1);
        }
        else
        {
            for(int j = 1; j < m; j++)
                adj[m * (i - 1) + j].emplace_back(m * (i - 1) + j + 1);
        }
    }

    for(int i = 1; i <= m; i++)
    {
        if(b[i - 1] == '^')
        {
            for(int j = n; j > 1; j--)
                adj[i + (j - 1) * m].emplace_back((j - 2) * m + i);
        }
        else
        {
            for(int j = 1; j <= n - 1; j++)
                adj[i + (j - 1) * m].emplace_back(j * m + i);
        }
        
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            vector <bool> vis(n * m + 1, false);
            dfs((i - 1) * m + j, vis, adj);
            bool ok = 1;
            for(int k = 1; k <= n * m; k++)
                ok &= vis[k];

            if(!ok)
                return printf("NO\n"), void();
        }
    }
    printf("YES\n");
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/output.txt","w",stdout);   
    #endif

    int t = 1;  //cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}