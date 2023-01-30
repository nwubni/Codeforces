#include <iostream>

using namespace std;

int main()
{
    int n{}, opinion{};
    bool hard{false};

    cin >> n;

    while (n--)
    {
        cin >> opinion;

        hard = hard || opinion;
    }

    if (hard)
        cout << "Hard";
    else
        cout << "Easy";

    return 0;
}