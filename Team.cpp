#include <iostream>

using namespace std;

int main()
{
    int t{}, f1, f2, f3, ans{0};

    cin >> t;

    while (t--)
    {
        cin >> f1 >> f2 >> f3;

        ans += (f1 + f2 + f3) >= 2;
    }

    cout << ans;

    return 0;
}