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
// Problem: 900 (Div. 3) - E

int n, q;
vector <int> v;
vector <int> tr;

void build(int x, int l, int r)
{
	if(l == r)
		return (tr[x] = v[l]), void();
	int mid = (l + r) / 2;
	build(2 * x, l, mid);
	build(2 * x + 1, mid + 1, r);
	tr[x] = (tr[2 * x] & tr[2 * x + 1]);
}

int get(int x, int l, int r, int ll, int rr)
{
	if(ll <= l && r <= rr)
		return tr[x];
	if(l > rr || r < ll)
		return -1;
	int mid = (l + r) / 2;
	int g1 = get(2 * x, l, mid, ll, rr);
	int g2 = get(2 * x + 1, mid + 1, r, ll, rr);
	return (g1 & g2); 
}

void solve(int T) 
{
    cin >> n;
    v.resize(n);
    tr.assign(4 * n, 0);
    for(int &i: v)
    	cin >> i;
    build(1, 0, n - 1);
    // cout << get(1, 0, n - 1, 0, 2) << endl;
    // for(int i: tr)
    // 	cout << i << " ";
    // cout << endl;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
    	int l, k; cin >> l >> k;
    	l--;
    	int r = n - 1;
    	if(v[l] < k)
    	{
    		printf("-1 ");
    		continue;
    	}
    	int ll = l, rr = n - 1;
    	while(ll <= rr)
    	{
    		int mid = (ll + rr) / 2;
    		int getInLtoR = get(1, 0, n - 1, l, mid);
    		if(getInLtoR >= k)
    			ll = mid + 1;
    		else
    			rr = mid - 1;
    	}
    	printf("%d ", rr + 1);
    }
	printf("\n");
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
