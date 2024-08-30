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

// File creation time: Sun 11/19/2023 16:35:09.79
// Website: Codeforces
// Problem: 910 (Div 2) - A

void solve(int T) 
{   
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cntB = count(begin(s), end(s), 'B');

    if(cntB == k)
        return cout << "0\n", void();
    else if(cntB > k)
    {
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            c += s[i] == 'B';
            if(cntB - c == k)
                return cout << "1\n" << i + 1 << " A\n", void();
        }
    }
    else
    {
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            c += s[i] == 'B';
            if((i + 1) + cntB - c == k)
                return cout << "1\n" << i + 1 << " B\n", void();
        }
    }


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
