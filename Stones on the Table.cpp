#include <iostream>

using namespace std;

int main()
{
    int removals{0}, n{};
    char prev{};

    cin >> n;

    string stones{};

    cin >> stones;

    for (char &stone : stones)
    {
        if (prev == stone)
        {
            removals++;
            continue;
        }

        prev = stone;
    }

    cout << removals;

    return 0;
}