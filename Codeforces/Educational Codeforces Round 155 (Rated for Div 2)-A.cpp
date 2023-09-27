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
// Problem: Educational Codeforces Round 155 (Rated for Div. 2) - A

void solve(int T) 
{
    int n; cin >> n;
    vector <pair <int ,pair <int ,int>>> v(n);
    for(int i = 0; i < n; i++)
    {
    	int s, e; cin >> s >> e;
    	v[i] = {s, {i, e}};
    }

    for(int i = 1; i < n; i++)
    {
    	if(v[i].first >= v[0].first)
    	{
    		if(v[i].second.second >= v[0].second.second)
    			return printf("-1\n"), void();
    	}
    }
    printf("%d\n", v[0].first);
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
