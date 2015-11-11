#include <iostream>
using namespace std;

void first_func();
void second_func();

int main()
{
    
	first_func();
	first_func();
	second_func();
	second_func();
}

void first_func()
{
	cout << "Tree blind mice";
}

void second_func()
{
	cout << "See how the run";
}