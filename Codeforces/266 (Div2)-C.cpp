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
// Problem: 498 (Div. 3) - C

void solve(int T) 
{
    int n; cin >> n;
    vector <long long> v(n);
    for(long long &i: v)
        cin >> i;
    for(int i = 1; i < n; i++)
        v[i] += v[i - 1];       
    if(n == 2 || v[n - 1] % 3)
        return printf("0\n"), void();

    long long ans = 0;
    map <long long, int> m;
    long long div3 = v[n - 1] / 3, div2 = 2 * div3;
    for(int i = 0; i < n - 1; i++)
    {
        if(v[i] == div3)
            m[v[i]]++;
        if(v[i] == div2)
            ans += m[v[n - 1] / 3] - (v[i] == 0);
    }
    printf("%lld\n", ans);
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/output.txt","w",stdout);   
    #endif

    int t = 1;  //cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}