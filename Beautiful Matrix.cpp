#include <iostream>

using namespace std;

int main()
{
    int n{5}, v{}, x{}, y{};

    for (int i{1}; i <= n; i++)
    {
        for (int j{1}; j <= n; j++)
        {
            cin >> v;

            if (v == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    cout << (abs(3 - x) + abs(3 - y));
    return 0;
}