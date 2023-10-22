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
// Problem: 899 (Div. 2) - B

void solve(int T) 
{
    int n; cin >> n;
    vector <vector <int>> v(n);
    set <int> s;
    for(int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	vector <int> vec(x); 
    	for(int k = 0; k < x; k++)
    	{
    		cin >> vec[k];
    		s.insert(vec[k]);
    	}
    	v[i] = vec;
    }

    int ans = 0;
    for(int i: s)
    {
		set <int> ss;
    	for(int j = 0; j < n; j++)
    	{
    		bool ok = true;
    		for(int k = 0; k < v[j].size(); k++)
    			ok &= (v[j][k] != i);

    		if(ok)
    		{
    			for(int q: v[j])
    				ss.insert(q);
    		}
    	}
    	if(ss != s)
    		ans = max(ans, int(ss.size()));
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
