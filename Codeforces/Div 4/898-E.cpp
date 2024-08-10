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
// Problem: 898 (Div. 4) - E

bool BS(long long h, vector <long long> &v, long long x)
{
	long long spend = 0;
	for(long long i: v)
	{
		if(h >= i)
			spend += (h - i);
	}
	return (spend <= x);
}

void solve(int T) 
{
    long long n, x; cin >> n >> x;
    vector <long long> v(n);
    for(long long &x: v)
    	cin >> x;

    long long l = 1, r = 1e10, ans = 1;
    while(l <= r)
    {
    	long long mid = l + (r - l) / 2LL;
    	if(BS(mid, v, x))
    	{
    		l = mid + 1;
    	}  
    	else
    	{
    		r = mid - 1;
    		ans = r;
    	}
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

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}