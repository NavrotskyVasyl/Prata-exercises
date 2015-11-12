#include <iostream>

using namespace std;

const int hundred_km = 100;

int main()
{
    float dist, consumption;

    cout << "Enter the distance you've gone: ";
    cin >> dist;
    cout << "Consumption of the fuel was: ";
    cin >> consumption;

    cout << "Fuel consumption is "
         << consumption / dist * hundred_km
         << " for 100 km";

    return 0;
}

