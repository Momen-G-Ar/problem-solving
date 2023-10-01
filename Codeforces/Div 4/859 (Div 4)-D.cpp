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
// Problem: 859 (Div 4) - D

void solve(int T) 
{
    int n, q; cin >> n >> q;
    vector <long long> v(n);
    for(long long &x: v)
    	cin >> x;
    for(int i = 1; i < n; i++)
    	v[i] += v[i - 1];
    long long sum = v[n - 1];
    while(q--)
    {
    	long long l, r, k; cin >> l >> r >> k;
    	l--, r--;
    	long long lhs = (l - 1 >= 0? v[l - 1]: 0);

    	if((sum - (v[r] - lhr) + k * (r - l + 1)) & 1)
    		printf("YES\n");
    	else
    		printf("NO\n");
    }
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
