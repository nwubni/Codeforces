#include <iostream>

using namespace std;

int main()
{
    int n{}, m{}, c{}, m_wins{0}, c_wins{0};

    cin >> n;

    while (n--)
    {
        cin >> m >> c;
        m_wins += m > c;
        c_wins += m < c;
    }

    if (m_wins == c_wins)
        cout << "Friendship is magic!^^";
    else if (m_wins > c_wins)
        cout << "Mishka";
    else
        cout << "Chris";

    return 0;
}