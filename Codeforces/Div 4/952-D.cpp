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

// File creation time: Tue 06/11/2024 18:01:12.62
// Website: Codeforces
// Problem: 952 (Div 4) - D

void solve(int T) 
{   
    int a, b; cin >> a >> b;
    vector <vector <char>> v(a, vector <char> (b));
    int mx = 0, k = 0;
    for(int i = 0; i < a; i++)
    {
        int s = 0;
        for(int j = 0; j < b; j++)
        {
            cin >> v[i][j];
            s += (v[i][j] == '#');
        }
        if(s > k)
        {
            k = s;
            mx = i;
        }
    }
    // cout << k<< endl;
    int aa = 0;
    for(int i = 0; i < b; i++)
    {
        aa += (v[mx][i] == '#');
        if(aa - 1 == k / 2)
            return cout << mx + 1 << " " << i + 1 << " " << endl, void();
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
