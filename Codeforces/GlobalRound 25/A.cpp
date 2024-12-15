
#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second
#define pb push_back
#define pf push_front
#define _pb pop_back
#define _pf pop_front
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define lli long long int
#define ull unsigned long long
#define ldb long double
#define db double
#define str string
#define WHILE while
#define FOR for
#define gcd __gcd
#define lcm(a, b) (a) / gcd((a), (b)) * (b)

#define oo (int)2e9 + 1
#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ldb EPS = 1e-9;

signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;

    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        std::vector<int> v;
        for(int i = 0; i < n; i++)
            if(s[i] == '1')
                v.push_back(i);

        // if(v.size() == 0)
        //     cout << "YES" << endl;
        // else if(v.size() %2 == 1)
        //     cout << "NO" << endl;
        // else if(v.size() == 2 && v[0] == v[1] - 1)
        //     cout << "NO" << endl;    
        // else 
        //     cout << "YES" << endl;            

        if(v.size() %2 == 1 || (v.size() == 2 && v[0] == v[1] - 1))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;


    }
    return 0;
}

/* TEST CASE

*/
