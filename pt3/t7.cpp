#include <iostream>

using namespace std;

const float mls_in_km = 0.6214;
const float lts_in_gal = 3.875;
const int hundred_km = 100;

int main()
{
    double consump, km_to_lt;

    cout << "Enter the EU's fuel consumption (liters/km): ";
    cin >> consump;


    km_to_lt = 1 / (consump / hundred_km);
    cout << "The US fuel consumption (miles/gallons) is "
         << km_to_lt * mls_in_km * lts_in_gal;

    return 0;
}

