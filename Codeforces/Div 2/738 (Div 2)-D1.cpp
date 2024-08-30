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

// File creation time: Mon 11/13/2023 17:56:00.39
// Website: Codeforces
// Problem: 738 (Div 2) - D1


struct DSU
{
private:
    vector <int> sz, par;
    int n;
    void init()
    {
        for(int i = 0; i < n; i++)
        {
            sz[i] = 1;
            par[i] = i;
        }
    }

public:
    DSU(int s)
    {
        n = s + 7;
        sz.assign(n, 1);
        par.assign(n, 0);
        init();
    }
    
    bool connect(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u == v)
            return false;
        if(u > v)
            swap(u, v);
        sz[u] += sz[v];
        par[v] = par[u];  
        return true;  
    }

    bool canConnect(int u, int v)
    {
        u = find(u);
        v = find(v);
        return (u != v);
    }

    int find(int u)
    {
        return par[u] = (par[u] == u? u: find(par[u]));
    }

    map <int, bool> parents() 
    {
        map <int, bool> ans;
        for(int i = 1; i < n; i++)
        {
            if(par[i] == i)
                ans[i] = true;
        }
        return ans;
    }
};



void solve(int T) 
{   
    int n, m1, m2; cin >> n >> m1 >> m2;
    DSU d1 = DSU(n), d2 = DSU(n);
    for(int i = 0; i < m1; i++)
    {
        int u, v; cin >> u >> v;
        d1.connect(u, v);
    }
    for(int i = 0; i < m2; i++)
    {
        int u, v; cin >> u >> v;
        d2.connect(u, v);
    }
    auto map1 = d1.parents();
    auto map2 = d2.parents();

    vector <pair <int, int>> ans;
    for(int i = 1; i <= n; i++)
    {   
        for(int j = 1; j <= n; j++)
        {
            if(i != j && d1.canConnect(i, j) && d2.canConnect(i, j))
            {
                d1.connect(i, j);
                d2.connect(i, j);
                ans.emplace_back(i, j);
            }
        }
    }
    cout << ans.size() << '\n';
    for(auto [f, s]: ans)
        cout << f << " " << s << '\n';
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
