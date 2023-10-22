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
// Problem: 354 (Div. 2) - C

void solve(int T) 
{
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int l = 0, r = 0, a = (s[0] == 'a'), b = (s[0] == 'b'), ans = 0;
    while(l < n && r < n)
    {
    	if(min(a, b) <= k)
    	{
			ans = max(ans, r - l + 1);
    		r++;
    		if(r < n)
    		{
	    		a += (s[r] == 'a'); 
	    		b += (s[r] == 'b');
    		}
    	}
    	else
    	{
    		a -= (s[l] == 'a'); 
    		b -= (s[l] == 'b');
    		l++;
    	}
    }
    printf("%d\n", ans);
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