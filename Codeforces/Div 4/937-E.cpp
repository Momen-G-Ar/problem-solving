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
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Thu 03/28/2024 21:34:10.07
// Website: Codeforces
// Problem: 937 (Div 4) - E

bool good(string s, int len)
{
    int x = s.size() / len, diff1 = 0, diff2 = 0;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < len; j++)
        {
            diff1 += (s[j] != s[i * len + j]);
            diff2 += (s[len + j] != s[i * len + j]);
        }
    }
    return (diff1 <= 1 || diff2 <= 1);
}

void solve(int T) 
{   
    int n; cin >> n;
    string s; cin >> s;
    vector <int> v;
    for(int i = 1; i <= n / 2; ++i)
    {
        if(n % i == 0)
            v.push_back(i);
    }
    for(int i: v)
    {
        if(good(s, i))
        {
            return cout << i << "\n", void();
        }
    }
    cout << n << "\n";
}   

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);
    #endif

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
