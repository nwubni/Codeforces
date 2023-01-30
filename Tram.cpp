#include <iostream>

using namespace std;

int main()
{
    int out{}, in{}, capacity{0}, passengers{0}, n{};

    cin >> n;

    while (n--)
    {
        cin >> out >> in;
        passengers -= out;
        passengers += in;

        capacity = max(capacity, passengers);
    }

    cout << capacity;

    return 0;
}