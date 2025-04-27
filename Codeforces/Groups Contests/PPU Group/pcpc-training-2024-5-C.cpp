////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long

const long long N = 1e7 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sat 10/12/2024 10:30:00.54
// Website: Codeforces
// Problem: pcpc-training-2024-5 - C

bitset <N> np;
vector <int> p;
vector <int> d;

void pre()
{
    d.resize(N);
    np[0] = np[1] = 1;
    d[1] = 1;
    for (int i = 2; i < N; i++)
    {
        if (!np[i])
        {
            p.emplace_back(i);
            d[i] = i;
            for (int j = i + i; j < N; j += i)
            {
                if (!d[j])
                    d[j] = i;
                np[j] = 1;
            }
        }
    }
}

void solve(int T)
{
    int n; cin >> n;
    vector <int> a(n), b(n);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << "i = " << i << endl;
        while (a[i] != b[i])
        {
            if (a[i] > b[i])
                a[i] = a[i] / d[a[i]];
            else
                b[i] = b[i] / d[b[i]];
            ans++;
        }
        // cout << "ans = " << ans << endl;
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
    pre();
    int t = 1;  cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
