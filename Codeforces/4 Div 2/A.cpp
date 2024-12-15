// https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>
using namespace std;

signed main() 
{
	long long w;
	cin >> w;
	if ((w-2) %2 == 0 && w != 2) 
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}
