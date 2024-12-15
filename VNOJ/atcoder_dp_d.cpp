// n1tr05
// https://codeforces.com/profile/n1tr05
// https://codeforces.com/profile/iLoveQueChi

#include <bits/stdc++.h>
using namespace std;

#define gcd __gcd
#define lcm(a, b) (a) / gcd((a), (b)) * (b)


#define oo (int)2e9 + 1
#define PI 3.1415926535897932384626433832795l 

const int MAX_N = 1e5 + 5;
const long long MOD = 1e9 + 7;
const long long INF = 1e9;
const long double EPS = 1e-9;


signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, s; cin >> n >> s;
    int w[n + 1], v[n + 1];

    for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];

    long long dp[n + 1][s + 1];
    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= s; j++)
    	{
    		dp[i][j] = dp[i - 1][j];
    		if(j >= w[i])
    			dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
    	}
    }

    cout << dp[n][s] << endl;

    
    return 0;
}


