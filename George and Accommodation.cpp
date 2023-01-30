#include <iostream>

using namespace std;

int main()
{
    int n{}, p{}, q{}, count{0};

    cin >> n;

    while (n--)
    {
        cin >> p >> q;
        count += (p + 2) <= q;
    }

    cout << count;

    return 0;
}