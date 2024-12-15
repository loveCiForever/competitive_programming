#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int t;
	cin >> t;

	string name = "Timur";
	sort(name.begin(), name.end());

	for(int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		string s;
		cin >> s;

		sort(s.begin(), s.end());

		if(s == name) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
