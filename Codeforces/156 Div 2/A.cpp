// NGUYEN QUANG HUY
// STUDENT ID: 523H0140
// CLASS: 23H50301
// FACULTY: INFORMATION TECHNOLOGY
// MAJOR: COMPUTER SCIENCE
// TON DUC THANG UNIVERSIRY

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
   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n <= 6 || n == 9) cout << "NO" << endl;
        else 
        {
            cout << "YES" << endl;
            if(n %3 == 0) cout << 1 << ' ' << 4 << ' ' << n - 5 << endl;
            else cout << 1 << ' ' << 2 << ' ' << n - 3 << endl;
        }
    }
}
