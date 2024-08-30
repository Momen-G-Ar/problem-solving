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
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 11/07/2023 17:02:12.13
// Website: Codeforces
// Problem: 908 (Div 2) - B

void solve(int T)
{
    int n; cin >> n;
    vector <int> v(n);
    map <int, int> m;
    for (int &i : v)
        cin >> i, m[i]++;

    vector <int> b(n, 1);
    int taken = -1;
    for (int i = 0; i < n; ++i)
    {
        if (m[v[i]] > 1)
        {
            b[i] = 2;
            taken = v[i];
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (m[v[i]] > 1 && v[i] != taken)
        {
            b[i] = 3;
            break;
        }
    }
    bool ok1 = 0, ok2 = 0, ok3 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && v[i] == v[j] && b[i] == 1 && b[j] == 2)
                ok1 = true;
            if (i != j && v[i] == v[j] && b[i] == 1 && b[j] == 3)
                ok2 = true;
            if (i != j && v[i] == v[j] && b[i] == 2 && b[j] == 3)
                ok3 = true;
        }
    }

    if ((ok1 && ok2 && !ok3)  || (ok2 && ok3 && !ok1) || (ok1 && ok3 && !ok2))
    {
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << '\n';
    }
    else
        return cout << "-1\n", void();



}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif

    int t = 1;  cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
