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

// File creation time: Mon 01/15/2024 17:09:25.69
// Website: Codeforces
// Problem: 920 (Div 3) - D

long long findS(int n, vector <long long>& a, multiset <long long> c)
{
    long long sum = 0;
    int l = 0, r = n - 1;
    while(l <= r)
    {   
        long long x = *c.rbegin(), y = *c.begin();
        long long diffl1 = abs(a[l] - x);
        long long diffl2 = abs(a[l] - y);
        long long diffr1 = abs(a[r] - x);
        long long diffr2 = abs(a[r] - y);
        long long mx = max({diffl1, diffl2, diffr1, diffr2});
        // cout << diffl1 << " " << diffl2 << " " << diffr1 << " " << diffr2 << endl;
        if(mx == diffl1)
        {
            c.erase(c.find(x));
            l++;
        }
        else if(mx == diffl2)
        {
            c.erase(c.find(y));
            l++;
        }   
        else if(mx == diffr1)
        {
            c.erase(c.find(x));
            r--;
        }  
        else
        {
            c.erase(c.find(y));
            r--;    
        } 
        sum += mx;
    }   
    return sum;
}

void solve(int T) 
{   
    int n, m; cin >> n >> m;
    vector <long long> a(n);
    multiset <long long> c;
    for(long long &i: a)
        cin >> i;
    for(int i = 0; i < m; i++)
    {
        long long x; cin >> x;
        c.insert(x);        
    }

    sort(a.begin(), a.end());
    long long sum = findS(n, a, c);
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
