#include <iostream>

using namespace std;

int main()
{
    int x1{}, x2{}, x3{};

    cin >> x1 >> x2 >> x3;

    if (x3 < x2)
        swap(x3, x2);
    if (x3 < x1)
        swap(x3, x1);

    if (x2 < x1)
        swap(x2, x1);

    int ans = (x2 - x1) + (x3 - x2);

    cout << ans;

    return 0;
}