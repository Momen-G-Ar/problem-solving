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

// File creation time: Thu 03/28/2024 21:55:14.98
// Website: Codeforces
// Problem: 937 (Div 4) - F

void solve(int T) 
{   
    int a, b, c; cin >> a >> b >> c;
    if(a == 0)
    {
        if(c == 1)
            cout << b << endl;
        else
            cout << "-1\n";
        return;
    }

    int number_of_levels = log2(a);
    number_of_levels += ((1 << number_of_levels) != a) + (__builtin_popcount(a) == 1);
    int number_of_nodes_in_last_level = (1 << number_of_levels);
    int nodes_of_two = (1 << (number_of_levels)) - 1;

    while(nodes_of_two > a)
    {
        number_of_nodes_in_last_level--;
        nodes_of_two--;
        b--;
    }
    if(number_of_nodes_in_last_level != c)
        return cout << "-1\n", void();

    while(b > 0)
    {
        b -= number_of_nodes_in_last_level;
        number_of_levels++;
    }
    cout << number_of_levels << '\n';
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
