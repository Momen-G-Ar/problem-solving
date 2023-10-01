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
// Problem: Educational Codeforces Round 155 (Rated for Div 2) - B

void solve(int T) 
{
    int n; cin >> n;
    long long suma = 0, sumb = 0, mina = INT_MAX, minb = INT_MAX;
    vector <long long> a(n), b(n);
    for(long long &i: a)
    {
    	cin >> i;
    	suma += i;
    	mina = min(mina, i);
    }
    for(long long &i: b)
    {
    	cin >> i;
    	sumb += i;
    	minb = min(minb, i);
    }

    long long ans = min(suma + (1LL * n * minb), sumb + (1LL * n * mina));
    printf("%lld\n", ans);
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
