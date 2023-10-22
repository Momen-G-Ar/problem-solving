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
// Problem: 418 (Div 2) - C

void solve(int T) 
{
    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;
    while(q--)
    {
    	int x; cin >> x;
    	char c; cin >> c;

    	int l = 0, r = 0, ans = 1, same = s[l] == c, other = s[l] != c;
    	while(l < n && r < n)
    	{
    		// cout << l << " " << r << " " << same << " " << other << endl;
    		if(other <= x)
    		{
    			ans = max(ans, r - l + 1);
    		}
    		if(other > x)
    		{
    			same -= (s[l] == c);
    			other -= (s[l] != c);
    			l++;
    		}
    		else
    		{
    			r++;
    			same += (s[r] == c);
    			other += (s[r] != c);
    		}
    	}
    	printf("%d\n", ans);
    }
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