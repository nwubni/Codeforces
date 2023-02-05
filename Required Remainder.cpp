#include <iostream>

using namespace std;

int main()
{
    int t{}, x{}, y{}, n{};

    cin >> t;

    while (t--)
    {
        cin >> x >> y >> n;

        if (n - n % x + y <= n)
            cout << n - n % x + y << '\n';
        else
            cout << n - n % x - (x - y) << '\n';
    }

    return 0;
}