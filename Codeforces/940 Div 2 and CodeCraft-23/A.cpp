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

const int MAX_N = 5e5+7;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ldb EPS = 1e-9;


signed main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    // int t; cin >> t;
    // while(t--)
    // {
    //     int min, count, n, poly;
    //         cin >> n;
    //     vector<int> numList;
    //     for(int i = 0; i < n; i++) cin >> numList[i];

    //     while (!(numList.empty())){
    //         min = *min_element(numList.begin(), numList.end());
    //         count = std::count(numList.begin(), numList.end(), min);

    //         if(count /3 >= 1) poly++;

    //         numList.erase(remove(numList.begin(), numList.end(), min), numList.end());
    //     }
        
    //     cout << poly << endl;    
    // }
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        int stick_each_length[MAX_N];

        for(int i = 1; i <= n; i++)
        {
            int a; cin >> a;
            ++stick_each_length[a];
            // length_of_array = sizeof()
        }

        int poly = 0;
        for(int i = 1; i <= 100; i++)
        {
            poly += (stick_each_length[i]/3);
            stick_each_length[i] = 0;
        }
        cout << poly << endl;
    }

    return 0;
}


