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

// File creation time: Tue 12/05/2023 17:01:07.72
// Website: Codeforces
// Problem: 913 (Div 3) - B

void solve(int T) 
{   
    string q; cin >> q;
    vector <pair <int, char>> c, s;
    for(int i = 0; i < q.size(); i++)
    {
        char cc = q[i];
        if(cc != 'b' && cc != 'B')
        {
            if(isupper(cc))
                c.emplace_back(i, cc);
            else
                s.emplace_back(i, cc);
        }
        if(cc == 'b' && s.size())
            s.pop_back();
        if(cc == 'B' && c.size())
            c.pop_back();
    }
    int i = 0, j = 0;
    while(i < s.size() || j < c.size())
    {
        if(i < s.size() && j < c.size())
        {
            if(s[i].first < c[j].first)
                cout << s[i++].second;
            else
                cout << c[j++].second;
        }
        else if(i < s.size())
            cout << s[i++].second;
        else
            cout << c[j++].second;
    }
    cout << '\n';

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
