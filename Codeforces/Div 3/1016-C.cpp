////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cout<<"[" << #x <<":"<< x <<"]"<<endl;

const long long N = 1e5 + 7;
const double PI = 3.14159265359;
int dx[] = { -2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = { -1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Tue 04/08/2025 18:08:04.76
// Website: Codeforces
// Problem: 1016 - C

bool isPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i += 1 + (i & 1)) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int dig(int n) {
    int ans = 0;
    while (n) {
        ans++;
        n /= 10;
    }
    return ans;
}

void solve(int T)
{
    int n, k; cin >> n >> k;
    // cout << n << " " << dig(n) << endl;
    if (dig(n) * k <= 11) {
        int l = dig(n), x = n;
        while (k - 1 > 0) {
            x *= pow(10, l);
            x += n;
            k--;
        }
        if (isPrime(x))
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";



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
