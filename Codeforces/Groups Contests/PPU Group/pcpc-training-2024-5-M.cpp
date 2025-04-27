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

// File creation time: Sat 10/12/2024 11:57:40.95
// Website: Codeforces
// Problem: pcpc-training-2024-5 - M

int sum(int l, int r)
{
    return (r * (r + 1) / 2) - (l * (l - 1) / 2);
}

vector <int> div(int n)
{
    vector <int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.emplace_back(i);
            if (n / i != i)
                ans.emplace_back(n / i);
        }
    }
    return ans;
}

void solve(int T)
{
    int n;
    cin >> n;
    // cout << "T = " << T << ", n = " << n << endl;
    if (__builtin_popcountl(n) == 1)
        return cout << "-1\n", void();
    if (n & 1)
        return cout << n / 2 << " " << n / 2 + 1 << endl, void();

    int cnt = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        cnt++;
    }
    int numberOfElements = (1 << cnt);
    int l = n / 2, r = n / 2 + 1;
    // cout << l << " " << r << endl;
    l -= (numberOfElements - 1), r += (numberOfElements - 1);
    if (l < 1)
        l = abs(l) + 1;
    cout << l << " " << r << endl;
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
    cerr << "Momin-Arafa" << endl;

    return 0;
}
