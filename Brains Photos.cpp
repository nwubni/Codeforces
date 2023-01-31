#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int row{}, col{};
    char color{};
    bool is_colored{false};
    unordered_set<char> colors{'C', 'M', 'Y'};

    cin >> row >> col;

    while (row--)
    {
        for (int i{1}; i <= col; i++)
        {
            cin >> color;
            is_colored = is_colored || colors.count(color);
        }
    }

    if (is_colored)
        cout << "#Color";
    else
        cout << "#Black&White";

    return 0;
}