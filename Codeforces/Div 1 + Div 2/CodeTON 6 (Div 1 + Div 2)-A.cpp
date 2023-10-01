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
// Problem: CodeTON Round 6 (Div. 1 + Div. 2, Rated, Prizes!) - A

void solve(int T) 
{
    int n, x, k; cin >> n >> k >> x;
    if(n < k || x < k - 1)
    	return printf("-1\n"), void();
    int mexM1 = k - 1;
    if(x != k)
    	printf("%lld\n", mexM1 * (mexM1 + 1) / 2 + (n - (mexM1 + 1)) * x);
    else
    	printf("%lld\n", mexM1 * (mexM1 + 1) / 2 + (n - (mexM1 + 1)) * mexM1);
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