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

// File creation time: Mon 11/06/2023 19:17:09.94
// Website: SPOJ
// Problem: BLINNET

class DSU {
private:
    int n;
    vector <int> par, size;
public:
    DSU(int sz){
        n = sz;
        init();
    }

    void init(){
        par = size = vector <int> (n + 100);
        for(int i = 0; i <= n; i++)
            par[i] = i, size[i] = 1;
    }

    bool join(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u == v)
            return false;

        // u must bigger 
        if(size[u] < size[v])
            swap(u, v);
        par[v] = u;
        size[u] += size[v];
        return true;
    }

    int find(int u)
    {
        return par[u] = ((u == par[u])? u : find(par[u]));
    }
};

int MST (vector <pair <int, pair <int, int>>> &edgeList, int numberOfNodes)
{
    // return edges with smallest edge weights
    int ans = 0;
    sort(begin(edgeList), end(edgeList)); 
    DSU d = DSU(numberOfNodes);
    d.init();
    for(auto [f, s]: edgeList)
    {
        if(d.join(s.second, s.first))
            ans += f;
    }
    return ans;
}

void solve(int T) 
{   
    int n; cin >> n;
    
    int u = 0;
    vector <pair <int, pair <int, int>>> edgeList;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        int x; cin >> x;
        for(int j = 0; j < x; j++)
        {
            int v, w; cin >> v >> w;
            edgeList.push_back({w, {u, v - 1}});
        }
        u++;
    }
    int ans = MST(edgeList, n); 
    printf("%d\n", ans);
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
