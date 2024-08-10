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
// Problem: 898 (Div. 4) - D

void solve(int T) 
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int l = 0, r = k - 1, ans = 0;
    while(l < n)
    {
    	if(s[l] == 'W')
    		l++, r++;
    	else
    	{
    		l = r + 1;
    		ans++;
    		r = l + k - 1;
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

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}