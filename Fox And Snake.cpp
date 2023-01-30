#include <iostream>

using namespace std;

int main()
{
    int n{}, m{};
    string output{};

    cin >> n >> m;

    string hashes(m, '#');
    string dots(m - 1, '.');
    bool put_dots{false}, pad_left{false};

    while (n--)
    {
        if (put_dots)
        {
            if (pad_left)
                output += '#' + dots + '\n';
            else
                output += dots + "#\n";

            pad_left = !pad_left;
        }
        else
            output += hashes + '\n';

        put_dots = !put_dots;
    }

    cout << output;

    return 0;
}