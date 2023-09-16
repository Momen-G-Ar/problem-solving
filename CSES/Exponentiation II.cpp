////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 7, mod = 1e9 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// Website: CSES
// Problem: Exponentiation II

long long fastPower(int n, int p, int modulo)
{
	if(p == 0)
		return 1;
	long long ans = fastPower(n, p / 2, modulo) % mod;
	if(p & 1)
		return ans * ans % modulo * n % modulo;
	else
		return ans * ans % modulo;
}

void solve(int T) 
{
    int a, b, c; cin >> a >> b >> c;
    int exponent = fastPower(b, c, mod - 1);
    cout << fastPower(a, exponent, mod) << '\n';
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