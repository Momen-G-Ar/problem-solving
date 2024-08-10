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
// Problem: 859 (Div 4) - E

void solve(int T) 
{
    int n; cin >> n;
    vector <long long> v(n);
    for(long long &i: v)
    	cin >> i;
    vector <long long> com = v;
    for(int i = 1; i < n; i++)
    	com[i] += com[i - 1];
    int l = 0, r = n - 1;
    while(l <= r)
    {
    	int mid = (l + r) / 2;
    	int cntl = (mid - l + 1), lhs = (l - 1 >= 0? com[l - 1]: 0);
    	long long sum = com[mid] - lhs;
    	cout << "? " << cntl << " ";
    	for(int j = l; j <= mid; j++)
    		cout << j + 1 << " ";
    	cout << endl;
    	int x; cin >> x;
    	if(sum != x)
    		r = mid - 1;
    	else
    		l = mid + 1;
    }
    cout << "! " << l + 1 << endl << endl;




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
	