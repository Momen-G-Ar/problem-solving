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

// File creation time: Thu 10/10/2024 22:09:02.90
// Website: Codeforces
// Problem: pcpc-training-2024-4 - I

void solve(int T)
{
    int n; cin >> n;
    string s; cin >> s;
    stack <int> st;
    vector <int> ans(n + 1);
    int temp = -1;
    for (auto c : s)
    {
        if (c >= '0' && c <= '9')
        {
            if (temp != -1)
                temp = temp * 10 + (c - '0');
            else
                temp = (c - '0');
        }
        else if (c == '(')
        {
            st.push(temp);
            temp = -1;
        }
        else
        {
            ans[temp] = st.top();
            temp = st.top();
            st.pop();
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
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
