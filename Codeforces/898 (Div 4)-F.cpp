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
// Problem: 898 (Div. 4) - F

void solve(int T) 
{
	int n, k; cin >> n >> k;
	vector <long long> a(n), h(n);
	for(long long &x: a)
		cin >> x;
	for(long long &x: h)
		cin >> x;
	if(n == 1)
		return printf("%d\n", a[0] <= k? 1: 0), void();
	vector <int> valid(n, 0); 
	vector <bool> vv(n, false); 
	for(int i = 0; i < n - 1; i++)
		vv[i] = (h[i] % h[i + 1] == 0);
	vv[n - 1] = true;
	valid[0] = (h[0] % h[1] == 0);
	valid[n - 1] = 1;
	for(int i = 1; i < n - 1; i++) 
		valid[i] = (h[i] % h[i + 1] == 0) + valid[i - 1]; 
	valid[n - 1] += valid[n - 2];

	for(int i = 1; i < n; i++)
		a[i] += a[i - 1];

	long long l = 0, r = 0, ans = 0;
	while(l < n && r < n)
	{
		int validL = (l - 1 >= 0? valid[l - 1]: 0);
		int lhs = (l - 1 >= 0? a[l - 1]: 0);
		if(
			((valid[r] - validL == (r - l + 1) || 
				(valid[r] - validL == (r - l) && !vv[r]))) 
			&& (a[r] - lhs <= k))
		{
			ans = max(ans, r - l + 1);
			r++;
		}
		else
			l++;
		if(l > r)
			r++;
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