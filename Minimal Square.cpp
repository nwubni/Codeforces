#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t{}, a{}, b{};

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        int s = min(max(2 * a, b), max(a, 2 * b));

        cout << s * s << "\n";
    }
    return 0;
}