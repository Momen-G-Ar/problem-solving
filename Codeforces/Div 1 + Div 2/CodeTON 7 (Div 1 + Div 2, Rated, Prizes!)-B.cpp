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

// File creation time: Sat 11/25/2023 16:55:20.37
// Website: Codeforces
// Problem: CodeTON 7 (Div 1 + Div 2, Rated, Prizes!) - B

void solve(int T) 
{   
    int n; cin >> n;
    string s; cin >> s;
    int a = -1, b = -1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == 'B' && b == -1)
            b = i;
        else if(s[i] == 'A')
            a = i;
    }
    if(a != - 1 && b != - 1 && a < b)
        cout << b - a << '\n';
    else
        cout << 0 << '\n';


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
