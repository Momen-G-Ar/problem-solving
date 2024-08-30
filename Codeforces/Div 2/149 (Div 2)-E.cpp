////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Fri 07/12/2024 22:41:31.13
// Website: Codeforces
// Problem: 149 (Div 2) - E

class segment{
public:
    int n; 
    vector <vector <int>> tr;
    vector <bitset <21>> lz;

    void init(int n)
    {
        this-> n = n;
        tr.assign(4 * n, vector <int> (21));
        lz.assign(4 * n, bitset <21> (0));
    } 

    vector <int> convert(int n)
    {
        vector <int> ans(21);
        for(int i = 0; i < 21; ++i)
        {
            if(n & (1ll << i))
                ans[i] = 1;
        }
        return ans;
    }

    int revert(vector <int> &a)
    {
        int ans = 0;
        for(int i = 0; i < 21; i++)
            ans += (a[i] * (1LL << i));
        return ans;
    }

    vector <int> merge(vector <int> &a, vector <int> &b)
    {
        vector <int> ans(21);
        for(int i = 0; i < 21; ++i)
            ans[i] = (a[i] + b[i]);
        return ans;
    }

    void build(vector <int> &v, int s, int e, int node = 1)
    {
        if(s == e)
            return tr[node] = convert(v[s]), void();
        int mid = s + (e - s) / 2;
        build(v, s, mid, 2 * node);
        build(v, mid + 1, e, 2 * node + 1);
        tr[node] = merge(tr[2 * node], tr[2 * node + 1]);
    }

    void push(int s, int e, int node)
    {
        if(lz[node].to_ullong())
        {
            for(int i = 0; i < 21; i++)
            {
                if(lz[node][i])
                    tr[node][i] = e - s + 1 - tr[node][i];
            }
            if(s != e)
            {
                lz[2 * node] ^= lz[node];
                lz[2 * node + 1] ^= lz[node];
            }
            lz[node] = 0;
        }
    }

    void update(int rs, int re, int x, int s, int e, int node = 1)
    {
        push(s, e, node);
        if(s > re || e < rs)
            return;
        if(rs <= s && e <= re)
        {
            lz[node] ^= x;
            push(s, e, node);
            return;
        }

        int mid = s + (e - s) / 2;
        update(rs, re, x, s, mid, 2 * node);
        update(rs, re, x, mid + 1, e, 2 * node + 1);
        tr[node] = merge(tr[2 * node], tr[2 * node + 1]);
    }

    int query(int rs, int re, int s, int e, int node = 1)
    {
        push(s, e, node);
        if(s > re || e < rs)
            return 0;
        if(rs <= s && e <= re)
            return revert(tr[node]);
        int mid = s + (e - s) / 2;
        int q1 = query(rs, re, s, mid, 2 * node);
        int q2 = query(rs, re, mid + 1, e, 2 * node + 1);
        return q1 + q2;
    }

};

void solve(int T) 
{   
    int n; cin >> n;
    vector <int> v(n);
    for(int &i: v)
        cin >> i;
    segment tr;
    tr.init(n);
    tr.build(v, 0, n - 1);
    int q; cin >> q;
    while(q--)
    {
        int t; cin >> t;
        if(t == 1)
        {
            int s, e; cin >> s >> e;
            s--, e--;
            cout << tr.query(s, e, 0, n - 1) << endl;
        }
        else
        {
            int s, e, val; cin >> s >> e >> val;
            s--, e--;
            tr.update(s, e, val, 0, n - 1);
        }
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

    return 0;
}
