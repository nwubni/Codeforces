#include <iostream>

using namespace std;

int main()
{
    int n{}, groups{0};
    string magnet{}, prev{"0"};

    cin >> n;

    while (n--)
    {
        cin >> magnet;

        groups += prev != magnet;
        prev = magnet;
    }

    cout << groups;

    return 0;
}