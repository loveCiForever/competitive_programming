// NGUYEN QUANG HUY
// STUDENT ID: 523H0140
// CLASS: 23H50301
// FACULTY: INFORMATION TECHNOLOGY
// MAJOR: COMPUTER SCIENCE
// TON DUC THANG UNIVERSIRY

#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second
#define pb push_back
#define pf push_front
#define _pb pop_back
#define _pf pop_front
#define lb lower_bound
#define ub upper_bound
#define ll long long
#define lli long long int
#define ull unsigned long long
#define ldb long double
#define db double
#define str string
#define gcd __gcd
#define lcm(a, b) (a) / gcd((a), (b)) * (b)
#define oo (int)2e9 + 1

char findMissingLetter(const std::vector<std::string>& square) 
{
    int missingRow = 0, 
        missingCol = 0;
    for (int i = 0; i < 3; ++i) {
        if (square[i].find('?') != std::string::npos) {
            missingRow = i;
            break;
        }
    }

    missingCol = square[missingRow].find('?');

    for (char ch : {'A', 'B', 'C'}) 
    {
        bool foundInRow = false, foundInCol = false;
        for (int i = 0; i < 3; ++i) {
            if (square[missingRow][i] == ch || square[i][missingCol] == ch) {
                foundInRow |= square[missingRow][i] == ch;
                foundInCol |= square[i][missingCol] == ch;
                continue;
            }
        }

        if (!foundInRow && !foundInCol) return ch;
    }
    return '?'; // This should never be reached
}

signed main() {
    int t;
    std::cin >> t;

    while (t--) 
    {
        std::vector<std::string> square(3);
        for(int i=0; i<3; ++i)
            std::cin >> square[i];
      
        std::cout << findMissingLetter(square) << std::endl;
    }
    return 0;
}
