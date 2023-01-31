#include <iostream>

using namespace std;

int main()
{
    int t{}, n{};
    bool square{};
    string s{};

    cin >> t;

    while (t--)
    {
        cin >> s;

        n = s.length();
        square = true;

        for (int i{0}, j{n / 2}; j < n; i++, j++)
        {
            if (s[i] != s[j])
            {
                square = false;
                break;
            }
        }

        if (square && n % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}