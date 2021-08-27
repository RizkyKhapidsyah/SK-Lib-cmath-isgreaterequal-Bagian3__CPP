
#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take two any values
	int a, b;
	bool hasil;
	a = 5;
	b = 8;

	hasil = isgreaterequal(a, b);
	cout << a << " isgreaterequal to " << b << ": " << hasil << endl;

	a = 8;
	b = 5;

	hasil = isgreaterequal(a, b);
	cout << a << " isgreaterequal to " << b << ": " << hasil;

	_getch();
	return 0;
}
