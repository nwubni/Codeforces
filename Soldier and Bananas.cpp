#include <iostream>

using namespace std;

int main()
{
    int k{}, n{}, w{}, total{};

    cin >> k >> n >> w;

    total = k * (w * (w + 1) / 2);

    if (total > n)
        cout << total - n;
    else
        cout << 0;

    return 0;
}