#include <iostream>

using namespace std;

int main()
{
    long long n{}, even_sum{}, evens{}, odd_sum{}, odds{};

    cin >> n;

    odds = (n / 2) + (n % 2);
    evens = n - odds;

    even_sum = evens * (evens + 1);
    odd_sum = odds * odds;

    cout << even_sum - odd_sum;

    return 0;
}