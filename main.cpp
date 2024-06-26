// main.cpp : Defines the entry point for the application.
//

#include "main.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	int a = 12;

	int* b = &a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	return 0;
}
