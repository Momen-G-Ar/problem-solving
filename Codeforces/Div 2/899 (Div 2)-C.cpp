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
// Problem: 899 (Div. 2) - C

int n; 

void solve(int T) 
{
  	int n;  cin >> n;
    vector <int> v(n);
    for(int &i: v)
    	cin >> i;
    vector <long long> c(n + 1);
    for(int i = n - 1; i >= 0; i--)
    	c[i] = c[i + 1] + (v[i] > 0? v[i]: 0) * 1LL;

    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
    	if((i + 1) & 1)
    		ans = max(ans, c[i + 1 - (v[i] > 0)] + (v[i] < 0? v[i]: 0) * 1LL);
    	else
    		ans = max(ans, c[i + 1]);
    }
    cout << ans << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);   
    #endif

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}
