////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e6 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// Website: CSES
// Problem: Common Divisors

int freq[N];

void solve(int T) 
{
    int n; cin >> n;
    vector <int> v(n);
    for(int &x: v)
    	cin >> x, freq[x]++;
    sort(rbegin(v), rend(v));
    int mx = 1;
    for(int i = 2; i <= v[0]; i++)
    {
    	int cnt = 0;
    	for(int j = i; j < N; j += i)
    	{
    		cnt += freq[j];
    		if(cnt > 1)
    			mx = max(mx, i);
    	}
    }
    cout << mx << '\n';


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