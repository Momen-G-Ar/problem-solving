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

// File creation time: Thu 03/28/2024 21:23:40.78
// Website: Codeforces
// Problem: 937 (Div 4) - D

vector <int> bin_dic;

void solve(int T) 
{   
    int n; cin >> n;
    for(int i = bin_dic.size() - 1; i >= 0; --i)
    {
        while(n % bin_dic[i] == 0)
        {
            n /= bin_dic[i];
        }
    }
    if(n == 1)
        cout << "YES\n";
    else
        cout << "NO\n";



}   

int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/input.txt","r",stdin);
    freopen("C:/Users/Momen..G.Ar/OneDrive/Desktop/competitiveprogramming/Sublime/output.txt","w",stdout);
    #endif

    for(int i = 2; i <= N; ++i)
    {
        int x = i;
        bool flag = true;
        while(x > 0)
        {
            flag &= (x % 10 <= 1);
            x /= 10;
        }
        if(flag)
            bin_dic.push_back(i);
    }

    int t = 1;  cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve(i);
    }

    return 0;
}
