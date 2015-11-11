#include <iostream>
using namespace std;

int forl_to_yards(int);

int main()
{
    int forlong_value;
    cout << "Enter the forelong value: ";
    cin >> forlong_value;
    cout << "This value contains " << forl_to_yards(forlong_value) << " yards";
}

int forl_to_yards(int forlongs)
{
    return forlongs * 220;
}

