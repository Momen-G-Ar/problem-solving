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
// Problem: 898 (Div. 4) - B

void solve(int T) 
{
    int n; cin >> n;
    vector <long long> v(n);
    int cnt = 0;
    long long prod = 1LL;
    for(long long &i: v)
    	cin >> i, prod *= i, cnt += (i == 0);
    if(cnt)
    {
    	prod = 1;
    	if(cnt > 1)
    	{
    		printf("0\n");
    	}
    	else
    	{
    		for(long long i: v)
    		{
    			if(i != 0)
    			{
    				prod *= i;
    			}
    		}
    		printf("%lld\n", prod);
    	}
    	return;
    }
    
    long long ans = 1LL;
    for(long long i: v)
    	ans = max(ans, prod / i * (i + 1));
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