////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Fri 08/30/2024 10:53:05.25
// Website: Codeforces
// Problem: qualifications - E
// url: https://codeforces.com/group/s6oaAC3jRI/contests


struct node {
    int mn, mni, mx, mxi;
};
//            min, max
vector <node> tree;
vector <int> v;

node merge(node a, node b)
{
    node x;
    if (a.mn > b.mn)
    {
        x.mn = b.mn;
        x.mni = b.mni;
    }
    else
    {
        x.mn = a.mn;
        x.mni = a.mni;
    }

    if (a.mx > b.mx)
    {
        x.mx = a.mx;
        x.mxi = a.mxi;
    }
    else
    {
        x.mx = b.mx;
        x.mxi = b.mxi;
    }
    return x;
}

void build(int x, int l, int r)
{
    if (l == r)
        return tree[x] = {v[l], l, v[l], l}, void();
    int mid = (l + r) / 2;
    build(2 * x, l, mid);
    build(2 * x + 1, mid + 1, r);
    tree[x] = merge(tree[2 * x], tree[2 * x + 1]);
}

int get(int x, int l, int r, int ll, int rr, int num)
{
    if (l > rr || r < ll)
        return INT_MAX;
    if (ll <= l && r <= rr)
    {
        if (tree[x].mx != num)
            return tree[x].mxi;
        else if (tree[x].mn != num)
            return tree[x].mni;
        else
            return INT_MAX;
    }
    int mid = (l + r) / 2;
    int x1 = get(2 * x, l, mid, ll, rr, num);
    if (x1 != INT_MAX)
        return x1;
    int x2 = get(2 * x + 1, mid + 1, r, ll, rr, num);
    if (x2 != INT_MAX)
        return x2;
    return INT_MAX;
}


void solve(int T)
{
    int n, q; cin >> n >> q;
    v.assign(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    tree.assign(4 * n, {INT_MAX, INT_MAX, INT_MAX, INT_MAX});
    build(1, 0, n - 1);
    while (q--)
    {
        int l, r, num; cin >> l >> r >> num;
        int res = get(1, 0, n - 1, l - 1, r - 1, num);
        cout << (res == INT_MAX ? -1 : (res + 1)) << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

    auto start = high_resolution_clock::now();
    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration_ms = duration_cast<milliseconds>(stop - start);
    auto duration_mcs = duration_cast<microseconds>(stop - start);
    cerr << "Runtime:" << duration_ms.count() << "Milli-Second." << endl;
    cerr << "Runtime:" << duration_mcs.count() << "Micro-Second." << endl;

    return 0;
}
