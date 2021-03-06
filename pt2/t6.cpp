#include <iostream>
using namespace std;

const int light_to_units = 63240; 
double  convert_light_to_units (float light_years);

int main()
{
    float light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " <<
            light_to_units(light_years) << " astronomical units.";
}



double convert_light_to_units(float light_years)
{
    return light_years * light_to_units;
}
