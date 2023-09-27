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

// Website: Codeforces
// Problem: 605 (Div 3) - E

int n; 

void bfs(vector <vector <int>> &adj, vector <long long> &ans, vector <int> &v)
{
    bitset <N> vis(0);
    queue <pair <int ,int>> q; 
    for(int i = 1; i <= n; ++i)
    {
        if(ans[i] == 1)
        {
            vis[i] = true;
            q.push({i, 1});
        }
    }

    while(q.size())
    {
        auto [top, lvl] = q.front(); q.pop();
        // cout << top << " => ";
        for(int ch: adj[top])
        {
            // cout << ch << ' ';
            if(!vis[ch])
            {
                q.push({ch, lvl + 1});
                if((v[top] & 1) ^ (v[ch] & 1))
                    ans[ch] = lvl;
                else
                    ans[ch] = lvl + 1LL;
                vis[ch] = true;
            }
        }
        // cout << endl;
    }
    return;
}

void solve(int T) 
{
    cin >> n;
    vector <int> v(n + 1);
    for(int i = 1; i <= n; ++i)
        cin >> v[i];
    vector <vector <int>> adj(n + 2, vector <int> ({}));
    vector <long long> ans(n + 2, 1e9);
    bool can = false;
    for(int i = 1; i <= n; ++i)
    {
        bool ok = false;
        if(i + v[i] <= n)
        {
            adj[v[i] + i].emplace_back(i);
            if((v[v[i] + i] & 1) ^ (v[i] & 1))
                ans[i] = 1;
            ok |= 1;
        }
        if(i - v[i] >= 1)
        {
            adj[i - v[i]].emplace_back(i);
            if((v[i - v[i]] & 1) ^ (v[i] & 1))
                ans[i] = 1;
            ok |= 1;
        }
        can |= ok;
        if(!ok)
            ans[i] = -1;
    }
    
    vector <bool> vis(n + 1, false);
    bfs(adj, ans, v);
    for(int i = 1; i <= n; ++i)
        printf("%d ", (ans[i] >= 1e9? -1: ans[i]));
    printf("\n");


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
    