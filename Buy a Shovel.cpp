#include <iostream>

using namespace std;

int main()
{
    int k{}, r{}, i{1};

    cin >> k >> r;

    int x = (i * k) % 10;

    while (x != 0 && x != r)
    {
        i++;
        x = (i * k) % 10;
    }

    cout << i;

    return 0;
}