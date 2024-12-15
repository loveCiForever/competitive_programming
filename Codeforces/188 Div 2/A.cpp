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
    long long int n, k; cin >> n >> k;

    if(n %2 == 0)
    {
    	if(k <= (n / 2)) cout << 2 * k - 1 << endl;
    	else cout << 2 * k - n << endl;
    }
    else
    {
    	if(k <= (n / 2) + 1) cout << 2 * k - 1 << endl;
    	else cout << 2 * k - n - 1 << endl;
    }

    return 0;
}

/* TEST CASE

*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n , number;
//     cin >> n >> number;

//     if(number <= (n+1)/2){
//         cout << (2*number)-1 << endl;
//     }else{
//         number = number - ((n+1) /2);
//         cout << 2*number << endl;
//     }

//     return 0;
// }
