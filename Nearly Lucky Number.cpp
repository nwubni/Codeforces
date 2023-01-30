#include <iostream>

using namespace std;

int main()
{
    long long n{};
    int count{0}, r{};

    cin >> n;

    while (n)
    {
        r = n % 10;
        count += r == 4 || r == 7;
        n /= 10;
    }

    n = count;
    bool is_lucky{false};

    while (n)
    {
        r = n % 10;

        if (r != 4 && r != 7)
            break;

        n /= 10;

        if (n == 0)
            is_lucky = true;
    }

    cout << (is_lucky ? "YES" : "NO");

    return 0;
}