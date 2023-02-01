#include <iostream>

using namespace std;

int main()
{
    int n{}, i{0}, height{0}, cubes{0};

    cin >> n;

    while (cubes < n)
    {
        i++;
        cubes += i * (i + 1) / 2; // Increment cubes by the sum of numbers from 1 to i
        height += cubes <= n;     // Increase height by 1 if the number of cubes is less than or equal to n
    }

    cout << height;

    return 0;
}