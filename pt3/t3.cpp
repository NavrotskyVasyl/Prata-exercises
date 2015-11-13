#include <iostream>

using namespace std;

const float mins_per_hr = 60;
const float secs_per_hr = 3600;

float convert_to_degrees(int degrees, int minutes, int seconds);

int main()
{
    int degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes and seconds: " << endl;
    cout << "First, enter the degree: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    cout << degrees << " degrees, "
         << minutes << " minutes, "
         << seconds << " seconds = "
         << convert_to_degrees(degrees, minutes, seconds) << " degrees." << endl;

    return 0;
}

float convert_to_degrees(int degrees, int minutes, int seconds)
{
    return degrees + (minutes / mins_per_hr) + (seconds / secs_per_hr);
}
