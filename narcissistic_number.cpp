#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

//SOLUTION
bool narcissistic(int value)
{
    // Code away
    int p = floor(log10(value)) + 1;
    int n = value;
    int sum = 0;

    while (n)
    {
        sum += pow(n % 10, p);
        n /= 10;
    }

    return sum == value;
}

int main()
{
    cout << narcissistic(1652) << endl;
    return 0;
}