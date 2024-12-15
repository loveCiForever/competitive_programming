#include <bits/stdc++.h>

using namespace std;

signed main()
{
	int t;
	string s;
	string it = "it";

	cin >> t;
	while(t--)
	{	
		cin >> s;

    if (s.find(it) != std::string::npos) 
        cout << "YES" << std::endl;
    else
        cout << "NO" << std::endl;
	}


	return 0;
}
