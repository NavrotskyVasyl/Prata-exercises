#include <iostream>
using namespace std;

float cels_to_fahr(float);

int main()
{
    float cels;
    cout << "Please enter a Celsium value: ";
    cin >> cels;
    cout << cels << " degrees Celsium is " << cels_to_fahr(cels) << " degrees Fahrenheit.";

}

float cels_to_fahr(float cels)
{
    return 1.8 * cels + 32;
}
