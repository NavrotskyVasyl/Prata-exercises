#include <iostream>

using namespace std;

const int inch_to_foot = 12;

int main()
{
    int height_inch;

    cout << "Enter you height in inches:__.\b\b\b";
    cin >> height_inch;
    cout << "Your height is: " << height_inch / inch_to_foot
         << " feet and "       << height_inch % inch_to_foot
         << " inches."         << endl;

    return 0;
}
