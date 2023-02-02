#include <iostream>

using namespace std;

int main()
{
    int t{}, a{}, b{}, diff{}, moves{};

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        moves = 0;
        diff = abs(a - b);

        if (a > b)
        {
            moves += diff > 0;
            moves += diff & 1;
        }
        else
        {
            moves += diff > 0;
            moves += diff > 0 && diff % 2 == 0;
        }

        cout << moves << '\n';
    }

    return 0;
}