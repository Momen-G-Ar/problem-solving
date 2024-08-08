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
// Problem: Graph Problems contest#1 B
// url: https://codeforces.com/group/ibNhxWfOek/contests

int winner(int w, int n, vector <vector <int>> &v)
{
    int cnt = 0;
    for(int i = 0; i < 5; i++)
        cnt += (v[n][i] < v[w][i]);
    return (cnt >= 3? n: w);
}

void solve(int T) 
{
    int n; cin >> n; 
    vector <vector <int>> v(n, vector <int> (5));
    for(vector <int> &v1: v)
    {
    	for(int &x: v1)
    		cin >> x;
    }
    
    int win = 0;
    for(int i = 1; i < n; i++)
        win = winner(win, i, v);
    
    for(int i = 0; i < n; i++)
    {
        if(win != winner(win, i, v))
            return printf("-1\n"), void();
    }
    printf("%d\n", win + 1);
}

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);   
    #endif

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }
    
    return 0;
}