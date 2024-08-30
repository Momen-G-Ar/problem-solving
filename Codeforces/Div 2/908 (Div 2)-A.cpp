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

// File creation time: Tue 11/07/2023 16:36:04.80
// Website: Codeforces
// Problem: 908 (Div 2) - A

void solve(int T)
{
    int n; cin >> n;
    string s; cin >> s;
    for (int y = 1; y <= 20; y++)
    {
        for (int x = 1; x <= 20; x++)
        {
            // cout << x << " " << y << endl;
            int cnta = 0, cntb = 0;
            int wina = 0, winb = 0;
            for (int i = 0; i < n; i++)
            {
                cnta += (s[i] == 'A');
                cntb += (s[i] == 'B');

                if (cnta == x)
                    wina++, cnta = 0, cntb = 0;
                if (cntb == x)
                    winb++, cnta = 0, cntb = 0;

                if (wina == y && (cnta == 0 && cntb == 0 && i == n - 1))
                    return printf("A\n"), void();
                else if (wina == y)
                    break;
                if (winb == y && (cnta == 0 && cntb == 0 && i == n - 1))
                    return printf("B\n"), void();
                else if (winb == y)
                    break;
            }
        }
    }
    printf("?\n");

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
