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
// Problem: 498 (Div. 3) - C

void solve(int T) 
{
    int n; cin >> n;
    vector <long long> v(n);
    for(long long &i: v)
    	cin >> i;
    long long sum1 = 0LL, sum2 = 0;
    map <long long, int> m1, m2;
    vector <long long> vv;
    for(int i = 0; i < n; i++)
    {
    	sum1 += v[i];
    	sum2 += v[n - i - 1];
    	if(!m1.count(sum1))
    		m1[sum1] = i;
    	m2[sum2] = n - i - 1;
    	vv.emplace_back(sum1);
    	vv.emplace_back(sum2);
    }

    long long mx = 0;
    for(long long sum: vv)
    {
    	if(m1.count(sum) && m2.count(sum) && m2[sum] > m1[sum])
    		mx = max(mx, sum);
    }
    printf("%lld\n", mx);
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