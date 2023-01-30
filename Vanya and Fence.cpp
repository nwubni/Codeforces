#include <iostream>

using namespace std;

int main()
{
    int n{}, h{}, a{}, total{0};

    cin >> n >> h;

    while (n--)
    {
        cin >> a;

        if (a > h)
            total += 2;
        else
            total += 1;
    }

    cout << total;

    return 0;
}