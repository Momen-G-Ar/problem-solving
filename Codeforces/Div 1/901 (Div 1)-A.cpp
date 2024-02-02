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
// Problem: 901 (Div 1) - A

void solve(int T) 
{   
    int n, m, k; cin >> n >> m >> k;
    multiset <long long> a, b; 
    long long sum = 0;
    for(int i = 0; i < n; i++)    
    {
        int x; cin >> x;
        a.insert(x);
        sum += x;
    }
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        b.insert(x);
    }

    k--;
    if(*a.begin() < *b.rbegin())
    {
        sum -= *a.begin();
        sum += *b.rbegin();
        b.insert(*a.begin());
        a.insert(*b.rbegin());
        b.erase(b.find(*b.rbegin()));
        a.erase(a.find(*a.begin()));
    }
    // cout << k << " sum = " << sum << endl;

    if(k & 1)
        sum = sum + (*a.rbegin() > *b.begin()? -*a.rbegin() + *b.begin(): 0);

    cout << sum << '\n';
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
