#include <iostream>

using namespace std;

int main()
{
    int t{}, a{}, b{};

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        if (a > b)
        {
            if (a % b == 0)
                cout << 0 << "\n";
            else
                cout << (a / b + 1) * b - a << "\n";
        }
        else
            cout << b - a << "\n";
    }

    return 0;
}