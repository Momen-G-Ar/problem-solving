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

// File creation time: Tue 06/11/2024 17:38:00.89
// Website: Codeforces
// Problem: 952 (Div 4) - B

void solve(int T) 
{   
    int n; cin >> n;
    int ans = 1, mx = 0;
    for(int i = 2; i <= n; i++)
    {
        int j = 1, sum = 0;
        while(i * j <= n)
        {
            sum += i * j;
            j++;
        }
        // cout << i << " " << sum << endl;
        if(sum > mx)
        {
            ans = i;
            mx = sum;        
        }
    }
    cout <<  ans << endl;


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
