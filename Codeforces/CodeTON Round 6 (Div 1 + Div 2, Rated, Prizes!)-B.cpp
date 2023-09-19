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
// Problem: CodeTON Round 6 (Div. 1 + Div. 2, Rated, Prizes!) - B

void solve(int T) 
{
    int n, m; cin >> n >> m;
    vector <long long> a(n), b(m);
    long long xxor = 0;
    for(long long &x: a)
    	cin >> x, xxor ^= x;
    long long orr = 0;
    for(long long &x: b)
    	cin >> x, orr |= x;

    long long mn = xxor, num = 0, mx = xxor;
    for(long long x: a)
    {
    	x |= orr;
    	num ^= x;
    }
    mn = min(num, mn);
    mx = max(num, mx);

    
    printf("%lld %lld\n", mn, mx);
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/output.txt","w",stdout);   
    #endif

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}