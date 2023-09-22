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
// Problem: 898 (Div. 4) - C

void solve(int T) 
{
    vector <vector <char>> v(10, vector <char> (10));
    for(vector <char> &v1: v)
    {
    	for(char &c: v1)
    		cin >> c;
    }
    int ans = 0;
    for(int i = 0; i < 10; i++)
    {
    	for(int j = 0; j < 10; j++)
    	{
    		if(v[i][j] == 'X')
    		{
    			int d = min({abs(0 - i), abs(0 - j), abs(9 - i), abs(9 - j)}) + 1;
    			ans += d;
    		}
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