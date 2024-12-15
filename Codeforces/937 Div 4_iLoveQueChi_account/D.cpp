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

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ldb EPS = 1e-9;

bool binaryChecked_1to1e5(int n)
{
	while(n)
	{
		if (n %10 > 1) return false;
		n /= 10;
	}
	return true;
}
signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    vector<int> checkedBinNum;
    vector<int> state_L(MAX_N);

    for(int i = 1; i < MAX_N + 1; i++)
    {
    	if(binaryChecked_1to1e5(i))
    	{
    		checkedBinNum.push_back(i);
    		state_L[i] = 1;
    	}
    }

    for(int i = 1; i < MAX_N + 1; i++)
    {
    	if(!state_L[i]) 
    		continue;
    	for(auto x : checkedBinNum)
    	{
    		if(i * x >= MAX_N)
    			break;
    		state_L[i * x] = 1;

    	}
    }

    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	cout << (state_L[n] ? "YES" : "NO") << endl;
    }

    
    return 0;
}


