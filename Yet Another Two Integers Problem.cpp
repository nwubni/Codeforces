#include <iostream>

using namespace std;

int main()
{
    int t{};
    long a{}, b{};

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        if (b > a)
            swap(a, b);

        long diff = a - b;
        int moves{0}, steps{10};

        while (diff > 0 && steps > 0)
        {
            while (steps > 0 && steps > diff)
                steps--;

            if (steps > 0)
            {
                moves += diff / steps;
                diff %= steps;
            }
        }

        cout << moves << "\n";
    }

    return 0;
}