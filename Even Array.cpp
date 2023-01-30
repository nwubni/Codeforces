#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t{}, n{}, a{};
    vector<int> vec{};

    cin >> t;

    while (t--)
    {
        cin >> n;

        while (n--)
        {
            cin >> a;
            vec.push_back(a);
        }

        int found{0}, left{0}, right{0}, swaps{0};

        while (right < vec.size())
        {
            while (right < vec.size())
            {
                if ((right % 2 && vec[right] % 2 == 0) || (right % 2 == 0 && vec[right] % 2))
                    break;

                right++;
            }

            if (right < vec.size())
            {
                left = right;
                found++;
            }
            else
            {
                break;
            }

            right++;

            if (right % 2)
            {
                while (right < vec.size())
                {
                    if (right % 2 && vec[right] % 2 == 0)
                    {
                        swap(vec[left], vec[right]);
                        swaps++;
                        found--;
                        right = left;
                        break;
                    }

                    right++;
                }
            }
            else
            {
                while (right < vec.size())
                {
                    if (right % 2 == 0 && vec[right] % 2)
                    {
                        swap(vec[left], vec[right]);
                        swaps++;
                        found--;
                        right = left;
                        break;
                    }

                    right++;
                }
            }

            right++;
        }

        vec.clear();

        if (found != 0)
            cout << -1 << "\n";
        else
            cout << swaps << "\n";
    }

    return 0;
}