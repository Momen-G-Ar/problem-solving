////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7, mod = 998244353;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};
#define int long long
// Website: Codeforces
// Problem: Educational Codeforces Round 155 (Rated for Div 2) - C

int fact[N];

int mult(int a, int b)
{
	return (((a % mod) * (b % mod)) % mod);
}

int numberOfDeletes(int n, string &s)
{
	int ans = 0;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] - '0' == n)
		{
			n = 1 - n;
			continue;
		}
		else
			ans++;
	}
	return ans;
}

int calc(int n, string &s)
{
	int ans = 1LL;
	int cnt = 1, c = n;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] - '0' == n)
		{
			n = 1 - n;
			if(cnt)
				ans = mult(ans, cnt); // nck(segLen, segLen - 1);
			cnt = 1;
		}
		else
			cnt++;
	}
	if(cnt)
		ans = mult(ans, cnt);
	return (ans % mod);
}	

void solve(int T) 
{
    string s; cin >> s;
    // check i have to start from 0 or one ->> 
    // After search if we start from the first one is always the best
    int numberOfDeletesStart1 = numberOfDeletes(1, s);
    int numberOfDeletesStart0 = numberOfDeletes(0, s);
    int numberOfSeq = -1LL, minToDelete = INT_MAX;
    if(numberOfDeletesStart1 > numberOfDeletesStart0)
    {	
    	minToDelete = numberOfDeletesStart0;
    	numberOfSeq = calc(0, s);
    }
    else
    {
    	minToDelete = numberOfDeletesStart1;
    	numberOfSeq = calc(1, s);
    }
    printf("%lld %lld\n", minToDelete, mult(numberOfSeq, fact[minToDelete]));
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/output.txt","w",stdout);   
    #endif

    fact[0] = fact[1] = 1LL;
    for(int i = 2; i < N; ++i)
    	fact[i] = mult(i, fact[i - 1]);

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}
