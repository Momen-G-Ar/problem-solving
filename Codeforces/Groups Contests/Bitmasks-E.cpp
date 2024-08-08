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
// Problem: Bitmasks - E
// url: https://codeforces.com/group/9QrbarK7qH/contest/474656/standings/groupmates/true

void solve(int T) 
{   
    int n; cin >> n;
    string a, b; cin >> a >> b;

    if(count(begin(a), end(a), '0') + count(begin(b), end(b), '0') == 0)
        return printf("0\n"), void();

    int ans = 0, t = -1;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] == '1' && b[i] == '1' && i > 0 && a[i - 1] == '0' && b[i - 1] == '0' && (t != i - 1))
        {
            ans++;
        }
        else if(a[i] == '1' && b[i] == '1')
        {
            while(i < n && a[i] == '1' && b[i] == '1')
                i++;
            if(i < n)
                ans += 2;
            t = i;
        }
        else if(a[i] != b[i])
            ans += 2;
        else if(a[i] == '0' && b[i] == '0')
            ans++;
    }
    printf("%d\n", ans);
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
