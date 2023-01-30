#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// SOLUTION
std::string disemvowel(const std::string &str)
{
    // return
    string final_str = "";

    for (char s : str)
    {
        char c = tolower(s);

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            final_str += s;
    }

    return final_str;
}

int main()
{
    cout << disemvowel("Come to the School.") << endl;
    return 0;
}