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

// File creation time: Tue 10/15/2024 20:05:51.24
// Website: Codeforces
// Problem: pcpc-training-2024-6 - A

bitset <N> np;
vector <int> primes;

void seive()
{
    np[0] = np[1] = 1;
    for (int i = 2; i < N; i++)
    {
        if (!np[i])
        {
            primes.emplace_back(i);
            for (int j = i + i; j < N; j += i)
                np[j] = 1;
        }
    }
}

bool isPrime(int n)
{
    if (n < 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void solve(int T)
{
    // cout << primes.size() << endl;;
    int n; cin >> n;
    vector <int> ans;

    for (int i = 0; i < n; i++)
        ans.emplace_back(primes[i]);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt", "r", stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt", "w", stdout);
#endif
    seive();
    int t = 1;  //cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    cerr << "Momin-Arafa" << endl;

    return 0;
}
