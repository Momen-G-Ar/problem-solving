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

// File creation time: Thu 03/28/2024 21:03:49.26
// Website: Codeforces
// Problem: 937 (Div 4) - B

void solve(int T) 
{   
    int n; cin >> n;
    for(int i = 0; i < 2 * n; i++)
    {
        if(i % 4 <= 1)
        {
            for(int j = 0; j < 2 * n; ++j)
            {
                if(j % 4 <= 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        else
        {
            for(int j = 0; j < 2 * n; ++j)
            {
                if(j % 4 <= 1)
                {
                    cout << ".";
                }
                else
                {
                    cout << "#";
                }
            }
        }
        cout << endl;
    }



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
