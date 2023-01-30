#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    int countN;

    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        countN = 0;

        for (char c : s)
            if (c == 'N')
                countN++;

        if (countN != 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}