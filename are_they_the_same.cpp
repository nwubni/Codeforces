#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

// SOLUTION
bool comp(std::vector<int> a, std::vector<int> b)
{
    // your code
    for (int i = 0; i < a.size(); i++)
        if ((a[i] * a[i]) != b[i])
            return false;

    return true;
}

int main()
{
    cout << comp({121, 144, 19, 161, 19, 144, 19, 11}, {14641, 20736, 361, 25921, 361, 20736, 362, 121});
    return 0;
}