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

// File creation time: Thu 03/28/2024 21:03:51.54
// Website: Codeforces
// Problem: 937 (Div 4) - C

void solve(int T) 
{   
    string s; cin >> s;
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    string m;
    m.push_back(s[3]);
    m.push_back(s[4]);
    string day = "AM", hours = "";
    if(h >= 12)
    {
        day = "PM";
        h %= 12;
    }
    if(h == 0)
        h = 12;
    if(h < 10)
        hours = "0" + to_string(h);
    else
        hours = to_string(h);

    cout << hours << ':' << m << " " << day << endl;

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
