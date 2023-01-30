#include <iostream>

using namespace std;

int main()
{
    int n{}, k{}, l{}, c{}, d{}, p{}, nl{}, np{};

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = k * l;
    int lime = c * d;
    int toasts{0};

    while (drink > 0 && lime > 0 && p > 0)
    {
        drink -= nl;
        lime -= 1;
        p -= np;

        toasts += (drink >= 0 && lime >= 0 && p >= 0);
    }

    cout << toasts / n;

    return 0;
}