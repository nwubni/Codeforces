#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n{}, total{0};
    string polyhedron{};
    unordered_map<string, int>
        faces{{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};

    cin >> n;

    while (n--)
    {
        cin >> polyhedron;

        total += faces[polyhedron];
    }

    cout << total;

    return 0;
}