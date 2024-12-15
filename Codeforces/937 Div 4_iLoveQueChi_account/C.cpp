// n1tr05
// https://codeforces.com/profile/n1tr05
// https://codeforces.com/profile/iLoveQueChi

#include <bits/stdc++.h>
using namespace std;

#define gcd __gcd
#define lcm(a, b) (a) / gcd((a), (b)) * (b)

#define ll long long
#define ldb long double

#define oo (int)2e9 + 1
#define PI 3.1415926535897932384626433832795l 

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ldb EPS = 1e-9;


signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
    	int hh, mm;
    	char colon;

    	string am_pm;

    	cin >> hh >> colon >> mm;

    	(hh >= 12) ? am_pm = "PM" : am_pm = "AM";

    	hh = (hh %12 ? hh%12 : 12);

    	cout << (hh < 10 ?  "0" : "") << hh << colon << (mm < 10 ? "0" : "") << mm << ' ' << am_pm << endl;
    }

    
    return 0;
}


