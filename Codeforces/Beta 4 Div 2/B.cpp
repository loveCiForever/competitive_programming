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
    
    int d, sumTimeNeed; cin >> d >> sumTimeNeed;

    int minTime[d + 1], maxTime[d + 1];
    for(int i = 1; i <= d; i++)
    	cin >> minTime[i] >> maxTime[i];

    int sumOfMaxTime, studyTime[d + 1];
    for(int i = 1; i <= d; i++)
    {
    	sumOfMaxTime += maxTime[i];
    	studyTime[i] = maxTime[i];
    }

    if(sumTimeNeed > sumOfMaxTime) 
    {
    	cout << "NO" << endl;
    	return 0;
    }

    for(int i = 1; i <= d && sumOfMaxTime > sumTimeNeed; i++)
    {	
    	int tmp = min(sumOfMaxTime - sumTimeNeed, studyTime[i] - minTime[i]);
    	studyTime[i] -= tmp;
    	sumOfMaxTime -= tmp;
    }

    if(sumOfMaxTime > sumTimeNeed)
    {
    	cout << "NO" << endl;
    	return 0;	
    }

    cout << "YES" << endl;
    for(int i = 1; i <= d; i++)
    	cout << studyTime[i] << ' ';

    // cout << "YES" << endl;
    // for(int i = 1; i <= d; i++)
    // 	cout << studyTime[i] << ' ';

    // cout << "YES" << endl;
    // for(int i = 1; i <= d; i++)
    // {
    // 	cout << sumTimeNeed / d  << ' ';
    // }	
    
    return 0;
}


