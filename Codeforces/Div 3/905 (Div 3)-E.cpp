////////////////////////////////////////////////////////////
//                                                        //
//     <<<<<<<<<<<< Momen Ghazi Arafeh >>>>>>>>>>>>>>     //
//     <<<< Don't wait the opportunity create it >>>>     //
//                                                        //
////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 7, M = 35;
const double PI = 3.14159265359;
int dx[] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[] = {-1, +1, -2, +2, -2, +2, -1, +1};

// File creation time: Sun 10/22/2023 15:15:38.88
// Website: Codeforces
// Problem: 905 (Div 3) - E

pair <bitset <M>, int> b[N];

int getLast(bitset <35> n)
{
    int ans = 0;
    for(int i = 32; i >= 0; i--)
    {
        if(n[i])
            return i;
    }
    return 0;
}

void solve(int T) 
{   
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        b[i].first = x;
        b[i].second = getLast(x);
    }   
    
    long long ans = 0;
    for(int j = 1; j < n; j++)
    {
        auto &[prevf, prevs] = b[j - 1];
        auto &[nowf, nows] = b[j];
        if(nows > prevs)
            continue;
        ans += (prevs - nows);
        nows = prevs;
        for(int i = getLast(prevf), k = getLast(nowf); (i >= 0 || k >= 0); i--, k--)
        {
            if(i >= 0 && k >= 0)
            {
                if(nowf[k] ^ prevf[i])
                {
                    if(!nowf[k] && prevf[i])
                        nows++, ans++;
                    break;
                }
            }
            else if(i >= 0 && prevf[i])
            {
                nows++, ans++;
                break;
            }
            else if(k >= 0 && nowf[k])
            {
                break;
            }
        }
    }
    printf("%I64d\n", ans);
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
