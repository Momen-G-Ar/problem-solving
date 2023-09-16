////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 2e5 + 7;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// Website: PCPC 2023
// Problem: O

int tt = 0;
vector <int> t;
int st[2 * N], et[2 * N], depth[N];
vector <vector <int>> level[N];
vector <int> qID[N];

struct query{
	int par, level, ind, ans = 0;
	query(){}
	bool operator<(const query q){
		if(q.level != level)
			return level < q.level;
		return par < q.par;
	}
};

void dfs(int node, int par, vector <vector <int>> &adj)
{
	t.emplace_back(node);
	st[node] = ++tt;
	depth[node] = depth[par] + 1;
	vector <int> v;
	for(int ch: adj[node])
	{
		if(ch != par)
		{
			v.emplace_back(ch);
			dfs(ch, node, adj);
		}
	}
	if(v.size())
		level[depth[node] + 1].emplace_back(v);
	t.emplace_back(node);
	et[node] = ++tt;
}

void solve(int T) 
{
    int n; cin >> n;
    vector <vector <int>> adj(n + 1, vector <int> ({}));
    for(int i = 0; i < n - 1; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    for(auto &x: adj)
    	sort(begin(x), end(x));
    level[1].emplace_back(vector <int> (1, 1));
    dfs(1, 0, adj);
    

    int q; cin >> q;
    vector <query> qq(q);
    for(int i = 0; i < q; i++)
    {
    	int length, par; cin >> par >> length;
    	qq[i].par = par;
    	qq[i].level = length + 1;
    	qq[i].ind = i;
    }
    sort(begin(qq), end(qq));
    vector <int> ans(q);
    int ll = qq[0].level, j = 0;
    for(int i = 0; i < q; i++)
    {
    	while(ll < q[i].level)
    		l++;
    }



    // for(int i = 1; i < 10; i++)
    // {
    // 	if(qID[i].size())
    // 	{
	//     	for(auto x: qID[i])
	//     		cout << x << " ";
	//     	cout << endl;
    // 	}
    // }

    // start and end time of each node 
    // for(int i = 0; i < t.size(); i++)
    // 	cout << t[i] << " ";
    // cout << endl;
    // for(int i = 0; i < t.size(); i++)
    // 	cout << st[t[i]] << " ";
    // cout << endl;
    // for(int i = 0; i < t.size(); i++)
    // 	cout << et[t[i]] << " ";
    // cout << endl;
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