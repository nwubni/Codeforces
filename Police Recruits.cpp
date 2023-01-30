#include <iostream>

using namespace std;

int main()
{
    int n{}, v{}, recruits{0}, count{0};

    cin >> n;

    while (n--)
    {
        cin >> v;

        recruits += v;

        if (recruits < 0)
        {
            count++;
            recruits = 0;
        }
    }

    cout << count;

    return 0;
}