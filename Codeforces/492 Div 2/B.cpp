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
    
    int n; cin >> n;

    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];


/*  // 16.4.2024

	int initialy_posi = 1;
	while(true)
	{
		if(a[initialy_posi] > 0)
		{
			for(int i = 1; i <= n; i++)
				if(a[i] > 0) 
					a[i] -= 1;
		}
		else if(a[initialy_posi] == 0)
			break;

		if(initialy_posi < n)
			initialy_posi++;
		else
			initialy_posi = 1;
	}

	cout << initialy_posi << endl;
*/

    // 17.4.2024
    	
    int index = 1,
		count = 0;

	while(a[index] > count)
	{
		if(index == n)
			index = 1;
		else
			index ++;
		count ++;
	}	

	cout << index << endl;


    return 0;
}


