#include <iostream>
#include <vector>
#include <string>

int main()
{
    int w{};
    std::vector<std::string> response{"NO", "YES"};
    int ans{false};

    std::cin >> w;
    int t{w};

    for (int i{2}; i <= w / 2; i += 2)
    {
        t -= i;

        if (t % 2 == 0)
        {
            ans = true;
            break;
        }
    }

    std::cout << response[ans] << "\n";

    return 0;
}