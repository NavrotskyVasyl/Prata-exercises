#include <iostream>
using namespace std;

void show_time(int hrs, int mins);

int main()
{
    int hrs, mins;

    cout << "Enter the number of hours: ";
    cin >> hrs;
    cout << "Enter the number of minutes: ";
    cin >> mins;
    show_time(hrs, mins);
}

void show_time(int hrs, int mins)
{
    cout << "Time " << hrs << ":" << mins;
}
