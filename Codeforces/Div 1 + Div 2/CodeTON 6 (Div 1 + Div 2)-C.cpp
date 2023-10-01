////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 7, MX = 1e8;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// Website: Codeforces
// Problem: CodeTON Round 6 (Div. 1 + Div. 2, Rated, Prizes!) - C

void solve(int T) 
{
    int n, k; cin >> n >> k;
    vector <int> v(n), mn(k + 1, MX), mx(k + 1, -1);
    set <int> s;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	v[i] = x;
    	s.insert(x);
    	mn[x] = min(mn[x], i);
    	mx[x] = max(mx[x], i);
    }

    for(int i = k - 1; i >= 1; i--)
    {
    	mn[i] = min(mn[i], mn[i + 1]);
    	mx[i] = max(mx[i], mx[i + 1]);
    }
    
    vector <int> ans(k);
    for(int i = 1; i <= k; i++)
    {
    	if(s.count(i))
    	{
    		ans[i - 1] = (mx[i] - mn[i] + 1) * 2;
    	}
    }
    for(int x: ans)
    	printf("%d ", x);
    printf("\n");
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