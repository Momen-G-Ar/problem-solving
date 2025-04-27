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

// File creation time: Sat 10/05/2024  9:39:34.66
// Website: Codeforces
// Problem: pcpc-training-2024-2 - K

struct {
    vector <long long> tr;
    vector <long long> lazy;

    void clear(int n)
    {
        tr.assign(4 * n + 2, 0);
        lazy.assign(4 * n + 2, 0);
    }


    void build(int x, int l, int r, vector <int>& v)
    {
        if (l == r)
            return tr[x] = v[l], void();

        int mid = l + (r - l) / 2;
        build(2 * x, l, mid, v);
        build(2 * x + 1, mid + 1, r, v);
        tr[x] = tr[2 * x] + tr[2 * x + 1];
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

int nofd(int x)
{
    int ans = 0;
    while (x)
    {
        x /= 10;
        ans++;
    }
    return ans;
}

int sumo(int x)
{
    int ans = 0;
    while (x)
    {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}

void solve(int T)
{
    int n, q; cin >> n >> q;
    vector <int> v(n);
    for (int &i : v)
        cin >> i;
    seg.clear(n);
    vector <bool> done(n + 1, 0);
    while (q--)
    {
        int t; cin >> t;
        if (t == 1)
        {
            int l, r; cin >> l >> r;
            l--, r--;
            seg.update(1, 0, n - 1, l, r, 1);
        }
        else
        {
            int tt; cin >> tt;
            tt--;
            if (done[tt])
                cout << v[tt] << endl;
            else
            {
                int x = seg.query(1, 0, n - 1, tt, tt);
                seg.update(1, 0, n - 1, tt, tt, -x);
                while (true)
                {
                    if (nofd(v[tt]) == 1 || x <= 0)
                        break;
                    else
                        v[tt] = sumo(v[tt]);
                    x--;
                }
                if (nofd(v[tt]) == 1)
                    done[tt] = true;
                cout << v[tt] << endl;
            }

        }
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
    int t = 1;  cin >> t;
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
