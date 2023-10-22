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

// Website: Codeforces
// Problem: 190 (Div 2) - B

void solve(int T) 
{   
    int a, b, c; cin >> a >> b >> c;
    int cnt0 = (a % 3 == 0) + (b % 3 == 0) + (c % 3 == 0);
    int cnt1 = (a % 3 == 1) + (b % 3 == 1) + (c % 3 == 1);
    int cnt2 = (a % 3 == 2) + (b % 3 == 2) + (c % 3 == 2);
    if(cnt0 >= 2)
        return printf("%d\n", a / 3 + b / 3 + c / 3), void();
    if(cnt1 >= 2)
        return printf("%d\n", (a / 3 + b / 3 + c / 3) + min({a % 3, b % 3, c % 3})), void();
    if(cnt2 >= 2)
        return printf("%d\n", (2 + ((a - 2) / 3 + (b - 2) / 3 + (c - 2) / 3)) + min({(a - 2) % 3, (b - 2) % 3, (c - 2) % 3})), void();
    return printf("%d\n", a / 3 + b / 3 + c / 3) + min({a % 3, b % 3, c % 3}), void();
}   

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);
    #endif

    int t = 1;  //cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
