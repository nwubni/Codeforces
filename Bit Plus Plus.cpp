#include <iostream>

using namespace std;

int main()
{
    int x{0}, n{};
    string input{};

    cin >> n;

    while (n--)
    {
        cin >> input;

        if (input.front() == '+' or input.back() == '+')
            x++;
        else
            x--;
    }

    cout << x;

    return 0;
}