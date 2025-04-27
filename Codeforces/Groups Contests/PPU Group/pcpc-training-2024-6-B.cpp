////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 10/15/2024 21:07:11.71
// Website: Codeforces
// Problem: pcpc-training-2024-6 - B

struct {
    vector <long long> tr;
    vector <long long> lazy;

    void clear(int n)
    {
        tr.assign(4 * n + 2, 0);
        lazy.assign(4 * n + 2, 0);
    }

    void push(int x, int l, int r)
    {
        tr[x] += (r - l + 1) * lazy[x];
        if (l < r)
        {
            lazy[2 * x] += lazy[x];
            lazy[2 * x + 1] += lazy[x];
        }
        lazy[x] = 0;
    }

    void update(int x, int l, int r, int ll, int rr, int val)
    {
        push(x, l, r);
        if (l > rr || r < ll)
            return;
        if (ll <= l && r <= rr)
        {
            lazy[x] += val;
            push(x, l, r);
            return;
        }
        int mid = l + (r - l) / 2;
        update(2 * x, l, mid, ll, rr, val);
        update(2 * x + 1, mid + 1, r, ll, rr, val);
        tr[x] = tr[2 * x] + tr[2 * x + 1];
    }

    long long query(int x, int l, int r, int ll, int rr)
    {
        push(x, l, r);
        if (l > rr || r < ll)
            return 0;
        if (ll <= l && r <= rr)
            return tr[x];
        int mid = l + (r - l) / 2;
        return query(2 * x, l, mid, ll, rr) +
               query(2 * x + 1, mid + 1, r, ll, rr);
    }


} seg;

void solve(int T)
{
    int n, m, k; cin >> n >> m >> k;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i)
            v[i] += v[i - 1];
    }
    // cout << v[n - 1] << endl;
    seg.clear(n);
    set <pair <int, pair <int, int>>, greater<>> s;
    int l = 0, r = m - 1;
    while (r < n)
    {
        if (l == 0)
            s.insert({v[r], {l, r}});
        else
            s.insert({v[r] - v[l - 1], {l, r}});
        l++, r++;
    }
    // for (auto x : s)
    // {
    // }
    // cout << (*s.begin()).first << endl;
    int taken = 0, ans = 0;
    while (taken < k)
    {
        auto x = *s.begin();
        if (seg.query(1, 0, n - 1, x.second.first, x.second.second) == 0)
        {
            ans += x.first;
            // cout << x.first << " " << x.second.first << " " << x.second.second << endl;
            taken++;
            seg.update(1, 0, n - 1, x.second.first, x.second.second, 1);
        }
        s.erase(x);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
