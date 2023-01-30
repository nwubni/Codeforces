#include <iostream>

using namespace std;

int main()
{
    int anton{0}, danik{0}, n{0};
    char c{};

    cin >> n;

    while (n--)
    {
        cin >> c;

        anton += c == 'A';
        danik += c == 'D';
    }

    if (anton > danik)
        cout << "Anton";
    else if (anton < danik)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}