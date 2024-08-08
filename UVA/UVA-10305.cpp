////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sat 07/06/2024 15:05:13.40
// Website: VJudge
// Problem: UVA - 10305

void dfs(int nod, vector <bool>& vis, vector <vector <int>>& adj, vector <int>& ans)
{
    vis[nod] = 1;
    for(auto ch : adj[nod])
    {
        if(!vis[ch])    
            dfs(ch, vis, adj, ans);
    }
    ans.push_back(nod + 1);
}

void solve() 
{
    int n, m;
    while(cin >> n >> m && (m || n))
    {
        vector <bool> vis(n, false);
        vector <int> ans;
        vector <vector <int>> adj(n, vector <int> ({}));
        
        for(int i = 0; i < m; i++)
        {
            int u, v; cin >> u >> v;
            u--, v--;
            adj[v].push_back(u);
        }

        for(int i = 0; i < n; i++)
        {
            if(!vis[i])
                dfs(i, vis, adj, ans);
        }
        
        for(auto x : ans)
            cout << x << " ";
        cout << endl;
          
    }
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);   
    #endif

    auto start = high_resolution_clock::now();
    int t = 1;  //cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve();
    }
    auto stop = high_resolution_clock::now();
 
    auto duration_ms = duration_cast<milliseconds>(stop - start);
    auto duration_mcs = duration_cast<microseconds>(stop - start);
 
    cerr << "Runtime = " << duration_ms.count() << " Milli-Second." << endl;
    cerr << "Runtime = " << duration_mcs.count() << " Micro-Second." << endl;
}