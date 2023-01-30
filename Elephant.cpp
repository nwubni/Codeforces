#include <iostream>

using namespace std;

int main()
{
    // This solution uses greedy algorithm.
    int moves{5}, steps{0}, x{};

    cin >> x;

    while (x > 0 && moves > 0)
    {
        steps += x / moves;
        x %= moves;
        moves--;
    }

    cout << steps;

    return 0;
}