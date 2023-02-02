#include <iostream>

using namespace std;

int main()
{
    int t{}, w{}, h{}, n{}, count{};

    cin >> t;

    while (t--)
    {
        cin >> w >> h >> n;

        count = 1;

        while (w > 0 && w % 2 == 0)
        {
            w /= 2;
            count *= 2;
        }

        while (h > 0 && h % 2 == 0)
        {
            h /= 2;
            count *= 2;
        }

        if (count >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}