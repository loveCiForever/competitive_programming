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
const int MAX = 1e4 + 1;


signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; cin >> n;

    int a[MAX];
    for(int i = 0; i < n; i++) cin >> a[i];


	if(n == 2 || n == 3) cout << abs(a[n - 1] - a[0]) << endl;
	else
	{
		vector<int> dp(n);
		dp[0] = 0;
		dp[1] = abs(a[1] - a[0]);

		for(int i = 2; i < n; i++) dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), (dp[i - 2] + abs(a[i] - a[i - 2])));

			cout << dp[n - 1] << endl;
	}
    
    return 0;
}


