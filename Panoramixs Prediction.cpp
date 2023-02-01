#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int n)
{
    int rt = sqrt(n);

    for (int i{2}; i <= rt; i++)
        if (n % i == 0)
            return false;

    return true;
}

bool correct_prediction(int m, int n)
{
    for (int i{m + 1}; i <= n; i++)
    {
        if (is_prime(i))
        {
            if (i == n)
                return true;

            break;
        }
    }

    return false;
}

int main()
{
    int m{}, n{};

    cin >> m >> n;

    if (correct_prediction(m, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}