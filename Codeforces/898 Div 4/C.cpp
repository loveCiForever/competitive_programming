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
    	// int matrix[10][10];
    	int res = 0;
    	char input;

    	for(int i = 0 ; i < 10; i++)
    	{
    		for(int j = 0; j < 10; j++)
    		{
    			cin >> input;
    			if(input == 'X')
    				res += (min(i, min(j, min(9 - i, 9 - j))) + 1);
    		}
    	}

    	// // for(int i = 0 ; i < 10; i++)
    	// // {
    	// // 	for(int j = 0; j < 10; j++)
    	// // 	{
    	// // 		cout << matrix[i][j] << ' ';
    	// // 	}
    	// // 	cout << endl;
    	// // }

    	// int res = 0;

    	// for(int j = 0; j < 10; j++)
    	// {
    	// 	if(matrix[0][j] == 1 || matrix[9][j] == 1) res += 1;
    	// 	else if(matrix[2][]) 
    	// }

    	// vector<int> matrix_convert_to_vector;
    	// for(int i = 0; i < 100; i++) cin >> matrix_convert_to_vector[i];
    	cout << res << endl;
    }
    return 0;
}


