#include <iostream>

using namespace std;

int main()
{
    int t{}, sum{};
    char c;

    cin >> t;

    while (t--)
    {
        sum = 0;

        for (int i{1}; i <= 6; i++)
        {
            cin >> c;

            if (i <= 3)
            {
                sum += c - '0';
                continue;
            }

            sum -= c - '0';
        }

        if (sum == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}