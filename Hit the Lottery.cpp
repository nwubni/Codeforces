#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int bills{0}, n{};
    vector<int> denom{100, 20, 10, 5, 1};

    cin >> n;

    for (int &val : denom)
    {
        bills += n / val;
        n %= val;

        if (n == 0)
            break;
    }

    cout << bills;

    return 0;
}