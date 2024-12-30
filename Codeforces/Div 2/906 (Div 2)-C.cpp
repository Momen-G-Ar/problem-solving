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

// File creation time: Sat 10/28/2023 16:51:13.81
// Website: Codeforces
// Problem: 906 (Div 2) - C

bool check(string s)
{
    int cnt1 = count(s.begin(), s.end(), '1');
    int cnt0 = count(s.begin(), s.end(), '0');
    return (s.size() & 1) || (cnt1 != cnt0);
}

void solve(int T)
{
    int n; cin >> n;
    string s; cin >> s;
    bool ss = check(s);
    if (ss)
        return cout << "-1\n", void();
    deque <int> v;
    for (char c : s)
        v.emplace_back(c - '0');
    vector <int> ans;
    int i = 0;
    while (v.size())
    {
        if (v.back() == v.front())
        {
            if (v.back() == 1)
            {
                v.push_front(1);
                v.push_front(0);
                ans.emplace_back(i);
            }
            else
            {
                v.push_back(0);
                v.push_back(1);
                ans.emplace_back(n - i);
            }
            n += 2;
        }
        while (v.size() && v.back() != v.front())
        {
            v.pop_back();
            v.pop_front();
            i++;
        }
    }
    cout << ans.size() << endl;
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
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
