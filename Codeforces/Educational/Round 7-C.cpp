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
// Problem: Round 7 - C

// segment Tree (min, max)

int n, q;

pair <int, int> merge(pair <int, int> p1, pair <int, int> p2, vector <int> &v)
{
    pair <int, int> ans = {-1, -1};
    if(p1.first == -1)
        ans.first = p2.first;
    else if(p2.first == -1)
        ans.first = p1.first;
    else if(p1.first != -1 && p2.first != -1)
    {
        if(v[p1.first] < v[p2.first])
            ans.first = p1.first;
        else
            ans.first = p2.first;
    }

    if(p1.second == -1)
        ans.second = p2.second;
    else if(p2.second == -1)
        ans.second = p1.second;
    else if(p1.second != -1 && p2.second != -1)
    {
        if(v[p1.second] > v[p2.second])
            ans.second = p1.second;
        else
            ans.second = p2.second;
    }
    return ans;
}

void build(vector <int> &v, vector <pair <int, int>> &tr, int x = 1, int l = 0, int r = n - 1)
{
    if(l == r)
        return tr[x] = {l, l}, void();
    int mid = (l + r) / 2;
    build(v, tr, 2 * x, l, mid);
    build(v, tr, 2 * x + 1, mid + 1, r);
    tr[x] = merge(tr[2 * x], tr[2 * x + 1], v);
}

pair <int, int> get(vector <pair <int, int>> &tr, vector <int> &v, int ll, int rr, int x = 1, int l = 0, int r = n - 1)
{
    if(ll > r || l > rr)
        return {-1, -1};
    if(ll <= l && r <= rr)
        return tr[x];
    int mid = (l + r) / 2;
    return 
        merge(
            get(tr, v, ll, rr, 2 * x, l, mid), 
            get(tr, v, ll, rr, 2 * x + 1, mid + 1, r), v
        );
}

void solve(int T) 
{   
    cin >> n >> q;
    vector <int> v(n + 1);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector <pair <int, int>> tr(4 * n, {-1, -1});
    build(v, tr);

    while(q--)
    {
        int l, r, x; cin >> l >> r >> x;
        l--, r--;
        auto [mn, mx] = get(tr, v, l, r);
        if(v[mn] == v[mx] && v[mx] == x)
            printf("-1\n");
        else
            printf("%d\n", (v[mn] != x? mn: mx) + 1);
    }
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
