#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int   inch_to_foot    = 12;
const float inch_to_meter   = 0.0254f;
const float pnd_to_kg       = 2.2f;
const int   rnd             = 10;

double count_bmi(const int height_foot, const int height_inch, const float weight_pnd);

int main()
{
    int height_foot;
    int height_inch;
    float weight_pnd;

    cout << "Enter your height:" << endl;
    cout << "_ feet,\b\b\b\b\b\b\b\b\b";
    cin >> height_foot;
    cout << "__ inches.\b\b\b\b\b\b\b\b\b\b";
    cin >> height_inch;
    cout << "\nEnter your weight:" << endl;
    cout << "___ pounds.\b\b\b\b\b\b\b\b\b\b\b";
    cin >> weight_pnd;
    
    cout << fixed << setprecision(1);
    cout << "\nYour BMI is: " <<
         count_bmi(height_foot, height_inch, weight_pnd)
         << "." << endl;

    return 0;
}

double count_bmi(const int height_foot, const int height_inch, const float weight_pnd)
{
    return (weight_pnd / pnd_to_kg)/
            pow(((height_foot * inch_to_foot + height_inch) * inch_to_meter), 2);
}
