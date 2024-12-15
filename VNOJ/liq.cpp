// n1tr05
// https://codeforces.com/profile/n1tr05
// https://codeforces.com/profile/iLoveQueChi

#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> L(n, 1);

	for(int i = 0; i < n; i++)
		for(int j = 0; j < i; j++)
			if(a[i] > a[j])
				L[i] = max(L[i], L[j] + 1);

	cout << *max_element(L.begin(), L.end()) << endl;

    
    return 0;
}


