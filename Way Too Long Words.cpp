#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t{}, n{};
    string word{};

    cin >> t;

    while (t--)
    {
        cin >> word;
        n = word.length();

        if (word.length() > 10)
            word = word.front() + to_string(n - 2) + word.back();

        cout << word << "\n";
    }

    return 0;
}