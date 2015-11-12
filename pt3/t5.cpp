#include <iostream>

using namespace std;

int main()
{
    long long world_population;
    long long country_population;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of you country: ";
    cin >> country_population;
    cout << "The population of your country is "
         << (long double) country_population / (long double) world_population * 100
         << "% of the world population.";

    return 0;
}

