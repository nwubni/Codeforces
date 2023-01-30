#include <iostream>

using namespace std;

int main()
{
    int n{}, p{};
    double total{0};

    cin >> n;

    int t{n};

    while (t--)
    {
        cin >> p;

        total += p / 100.0;
    }

    cout << (total / n) * 100;

    return 0;
}