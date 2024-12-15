
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

    int t = 1;
    cin >> t;

    while(t--)
    {
        int n, 
            a, 
            b;
        cin >> n 
            >> a 
            >> b;

        int c[n*n],
            d[n*n],
            e[n],
            f = INT_MAX;

        for(int i = 0; i < (n*n); i++)
        {
            cin >> c[i];
            e[i] = 0;
        }
        sort(c, c+(n*n));

        f = c[0];
        int ff = 0;

        for(int i=0; i<n; i++)
            e[i]=(f+(i*b));
    
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                d[i*n+(j)] = (e[i]+(a*j));
        
        sort(d, d+(n*n));
        for(int i = 0; i < (n*n); i++)
            if(c[i] != d[i])
            {
                ff = 1;
                break;
            }
        
        if(ff == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

/* TEST CASE

*/