#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n{}, v{};
    int min_v{INT_MAX}, min_pos{0}, max_v{INT_MIN}, max_pos{0};
    int i{0};
    vector<int> nums{};

    cin >> n;

    int t = n;

    while (t--)
    {
        cin >> v;

        nums.push_back(v);

        if (min_v > v)
            min_v = v;

        if (max_v < v)
        {
            max_v = v;
            max_pos = i;
        }

        i++;
    }

    int swaps{0};
    i = max_pos;

    while (max_pos - 1 >= 0)
    {
        swap(nums[max_pos], nums[max_pos - 1]);
        max_pos--;
        swaps++;
    }

    for (int j{n - 1}; j > 0; j--)
    {
        if (nums[j] == min_v)
        {
            min_pos = j;
            break;
        }
    }

    swaps += n - min_pos - 1;

    cout << swaps;

    return 0;
}