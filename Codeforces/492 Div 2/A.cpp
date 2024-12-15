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
    
    long long n; cin >> n;
    int res = 0;

    	if(n/100 >= 1)
    	{
    		res += (n/100);
    		n -= (n/100)*100;
    	}

    	if(n/20 >= 1)
    	{
    		res += (n/20);
    		n -= (n/20)*20;
    	}


    	if(n/10 >= 1)
    	{
    		res += (n/10);
    		n -= (n/10)*10;
    	}

    	if(n/5 >= 1)
    	{
    		res += (n/5);
    		n -= (n/5)*5;
    	}

    	if(n/1 >= 1)
    		res += n;
    		
    cout << res << endl;
    
    return 0;
}


