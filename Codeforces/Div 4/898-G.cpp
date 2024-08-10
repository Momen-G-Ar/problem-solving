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
// Problem: 898 (Div. 4) - G

void solve(int T) 
{
    string s; cin >> s;
    int cntb = 0, cnta = 0;
    vector <int> ans;
    for(char c: s)
    {
    	cnta += (c == 'A');
    	cntb += (c == 'B');
    	if(c == 'B')
    	{
    		ans.emplace_back(cnta);
    		cnta = 0;
    	}
    }
    if(cnta)
		ans.emplace_back(cnta);
    sort(rbegin(ans), rend(ans));
    int res = 0;
    for(int i = 0; i < min(cntb, int(ans.size())); i++)
    	res += ans[i];
    printf("%d\n", res);
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