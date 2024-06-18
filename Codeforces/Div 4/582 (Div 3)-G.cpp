////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

const long long N = 2e5 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

#define int long long

// File creation time: Tue 06/18/2024 12:53:51.05
// Website: Codeforces
// Problem: 582 (Div 3) - G

class DSU{
private:
    int n;
    vector <int> par, size, ans;
    long long currAns;
public:

    DSU(int sz){
        n = sz;
        currAns = 0;
        init();
    }

    void init(){
        par = size = ans = vector <int> (n + 100, 0);
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
        currAns -= sum(size[u]);
        currAns -= sum(size[v]);
        par[v] = u;
        size[u] += size[v];
        size[v] = 0;
        currAns += sum(size[u]);
        return true;
    }

    int find(int u)
    {
        return par[u] = ((u == par[u])? u : find(par[u]));
    }

    long long sum(long long n)
    {
        return 1LL * (n * (n - 1)) / 2;
    }

    int update(int ind)
    {
        ans[ind] = currAns;
        return currAns;
    }

    void print()
    {
        for(int i = 0; i < n; i++)
            cout << i << " " << ans[i] << endl;
        cout << endl;
    }

    long long getAns(int ind)
    {
        return ans[ind];
    }
};

struct node
{
    int w, u, v;
    const bool operator<(const node a) const 
    {   
        return w > a.w;
    }
};

void solve(int T) 
{   
    int n, q; cin >> n >> q;
    priority_queue <node> pq;
    int mxW = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int u, v, w; cin >> u >> v >> w;
        mxW = max(mxW, w);
        pq.push({w, u, v});
    }
    DSU d = DSU(N);
    for(int i = 1; i <= mxW; i++)
    {
        while(pq.size() && pq.top().w <= i)
        {
            auto nd = pq.top(); pq.pop();
            d.join(nd.u, nd.v);
        }
        d.update(i);
    }

    // d.print();

    while(q--)
    {
        int t; cin >> t;
        if(t >= mxW)
            cout << d.sum(n) << " ";
        else
            cout << d.getAns(t) << " ";
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
        solve(i);
    }
    auto stop = high_resolution_clock::now();
 
    auto duration_ms = duration_cast<milliseconds>(stop - start);
    auto duration_mcs = duration_cast<microseconds>(stop - start);
 
    cerr << "Runtime = " << duration_ms.count() << " Milli-Second." << endl;
    cerr << "Runtime = " << duration_mcs.count() << " Micro-Second." << endl;
}