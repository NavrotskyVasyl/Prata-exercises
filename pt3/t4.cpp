#include <iostream>

using namespace std;

const int sec_per_day = 86400;
const int sec_per_hour = 3600;
const int sec_per_minute = 60;

int main()
{
    long long seconds;
    int days, hours, minutes;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = ";

    days = seconds / sec_per_day;
    seconds -= days * sec_per_day;

    hours = seconds / sec_per_hour;
    seconds -= hours * sec_per_hour;

    minutes = seconds / sec_per_minute;
    seconds -= minutes * sec_per_minute;

    cout << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds. " << endl;

    return 0;
}

