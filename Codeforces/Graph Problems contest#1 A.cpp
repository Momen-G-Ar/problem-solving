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
// Problem: Graph Problems contest#1 A
// url: https://codeforces.com/group/ibNhxWfOek/contests

void solve(int T) 
{
    int n; cin >> n;
    vector <int> v(n);
    for(int &x: v)
    	cin >> x;
    
    if(v[0] == 1)
    {
		printf("%d ", n + 1);
		for(int i = 1; i <= n; i++)
		{
			printf("%d ", i);
		}
		printf("\n");
		return;
    }
    if(v[n - 1] == 0)
    {
		for(int i = 1; i <= n + 1; i++)
		{
			printf("%d ", i);
		}
		printf("\n");
		return;
    }
    vector <int> ans(n + 1);
    for(int i = 0; i < n - 1; i++)
    {
    	if(v[i] == 0 && v[i + 1] == 1)
    	{
    		for(int j = 1; j <= i + 1; j++)
			{
				printf("%d ", j);
			}
			printf("%d ", n + 1);
			for(int j = i + 2; j <= n; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
			return;
    	}
    }
	printf("-1\n");	
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