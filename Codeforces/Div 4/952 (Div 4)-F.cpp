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
#define int long long
// File creation time: Tue 06/11/2024 18:34:04.59
// Website: Codeforces
// Problem: 952 (Div 4) - F

bool BS(int t, vector <int> &a, vector <int> &b, int h)
{
    int sum = 0;
    for(int i = 0; i < a.size(); i++)
        sum += a[i];
    t--;
    for(int i = 0; i < a.size(); i++)
    {
        sum += a[i] * (t / (b[i]));
        if(sum >= h)
            return true;
    }
    return sum >= h;
}

void solve(int T) 
{   
    int h, n; cin >> h >> n;
    vector <int> a(n), b(n);
    for(auto &i: a)
        cin >> i;
    for(auto &i: b)
        cin >> i;
    int l = 1, r = 1e12;
    while(l <= r)
    {
        int mid = l + (r - l) / 2;
        if(BS(mid, a, b, h))
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << l << endl;


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
