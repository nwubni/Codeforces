#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int y{}, w{};

    cin >> y >> w;

    int d = 6 - max(y, w) + 1;
    int gcd = __gcd(d, 6);

    cout << (d / gcd) << "/" << (6 / gcd) << "\n";
    return 0;
}