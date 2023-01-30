#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void reduce(int n, int &rem, vector<int> &ans)
{
    int p = log10(n);
    p = pow(10, p);

    rem = n % p;
    n -= rem;

    ans.push_back(n);
}

void print(vector<int> &v)
{
    for (int &n : v)
        cout << n << " ";

    cout << "\n";
}

int main()
{
    int t{}, n{}, i{}, rem{};
    vector<int> ans{};

    cin >> t;

    while (t--)
    {
        cin >> n;

        i = 0;
        rem = 0;

        do
        {
            reduce(n, rem, ans);
            n = rem;
            i++;
        } while (rem);

        cout << i << "\n";

        print(ans);
        ans.clear();
    }

    return 0;
}