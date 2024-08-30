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

// File creation time: Wed 11/15/2023 17:09:31.71
// Website: Codeforces
// Problem: 600 (Div 2) - D

class DSU{
private:
    int n;
    vector <int> par, size, mn, mx;
public:

    DSU(int sz){
        n = sz;
        init();
    }

    void init(){
        mx = mn = par = size = vector <int> (n + 100);
        for(int i = 0; i <= n; i++)
            par[i] = i, size[i] = 1, mn[i] = i, mx[i] = i;
    }

    bool connect(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u == v)
            return false;

        // u must bigger 
        if(size[u] < size[v])
            swap(u, v);

        mx[u] = max(mx[u], mx[v]);
        mn[u] = min(mn[u], mn[v]);
        par[v] = u;
        size[u] += size[v];
        return true;
    }

    int find(int u)
    {
        return par[u] = ((u == par[u])? u : find(par[u]));
    }

    int minVal(int u)
    {
        return mn[u];
    }
    
    int maxVal(int u)
    {
        return mx[u];
    }
};

void solve(int T) 
{   
    int n, m; cin >> n >> m;
    DSU d = DSU(n);
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        d.connect(u, v);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int mx = d.maxVal(d.find(i));
        for(int j = i + 1; j <= mx; j++)
        {
            if(d.connect(i, j))
            {
                ans++;
                mx = d.maxVal(d.find(i));
            }

        }
        i = mx;
    }
    cout << ans << '\n';
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
