#include <iostream>
using namespace std;

double light_to_units(float);

int main()
{
    float light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " <<
            light_to_units(light_years) << " astronomical units.";
}

double light_to_units(float light_years)
{
    return light_years * 63240;
}
