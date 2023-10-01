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
// Problem: 859 (Div 4) - F

string arr[] = {"DL", "DR", "UR", "UL"};
pair <int, int> go[] = {{+1, -1}, {+1, +1}, {-1, +1}, {-1, -1}};
map <string, int> mm;
int n, m;
int xx, yy, xe, ye; 
bool can = false; 

int dfs(int i, int j, string dir, vector <vector <vector <bool>>> &vis)
{
	vis[i][j][mm[dir]] = true;
	// cout << i << " " << j << " " << dir << endl;
	if(i == xe && j == ye)
	{
		can = true;
		return 0;
	}
	string dd = dir;
	if(i == 1 || i == n || j == 1 || j == m)
	{
		if(i == 1)
		{
			if(j == m)
				dd = "DL";
			else if(j == 1)
				dd = "DR";
			else
			{
				if(dir == "UR")
					dd = "DR";
				else if(dir == "UL")
					dd = "DL";
			}
		}
		else if(i == n)
		{
			if(j == m)
				dd = "UL";
			else if(j == 1)
				dd = "UR";
			else
			{
				if(dir == "DL")
					dd = "UL";
				else if(dir == "DR")
					dd = "UR";
			}
		}
		else if(j == 1)
		{
			if(dir == "UL")
				dd = "UR"; 
			else if(dir == "DL")
				dd = "DR";
		}
		else if(j == m)
		{
			if(dir == "DR")
				dd = "DL";
			else if(dir == "UR")
				dd = "UL";
		}
	}

	int x = i + go[mm[dd]].first, y = j + go[mm[dd]].second;
	// cout << dd << endl;
	// cout << x << " " << y << endl;

	if(!vis[x][y][mm[dd]])
		return (dd != dir) + dfs(x, y, dd, vis);
	else
		return -1;
}

void solve(int T) 
{
    cin >> n >> m;
    cin >> xx >> yy >> xe >> ye;
    string s; cin >> s;
    vector <vector <vector <bool>>> vis
    		(n + 2, vector <vector <bool>> (m + 2, vector <bool> (4, false)));
    vis[xx][yy][mm[s]] = true;
    can = false;
	int ok = dfs(xx, yy, s, vis);
	if(can)
		printf("%d\n", ok);
	else
		printf("-1\n");

}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitive programming/Sublime/output.txt","w",stdout);   
    #endif

    mm["DL"] = 0;
    mm["DR"] = 1;
    mm["UR"] = 2;
    mm["UL"] = 3;

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}