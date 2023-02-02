#include <iostream>

using namespace std;

int get_floor(int n, int x)
{
    if (n <= 2)
        return 1;

    int floor{1};
    n -= 2; // Remove first floor

    floor += n / x;        // Increment the number of floors by determining the number of times x rooms divide n
    floor += (n % x) != 0; // Add an extra floor if n / x has a remainder

    return floor;
}

int main()
{
    int t{}, n{}, x{};

    cin >> t;

    while (t--)
    {
        cin >> n >> x;
        cout << get_floor(n, x) << '\n';
    }

    return 0;
}