#include <iostream>

using namespace std;

int main()
{
    int t{}, a{}, n{}, count{};

    cin >> t;

    while (t--)
    {
        a = -1;
        count = 0;

        for (int i{1}; i <= 4; i++)
        {
            cin >> n;

            if (a == -1)
            {
                a = n;
                continue;
            }

            count += a < n;
        }

        cout << count << '\n';
    }

    return 0;
}