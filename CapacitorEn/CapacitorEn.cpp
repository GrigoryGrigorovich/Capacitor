#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double s, c;

	const double epsilon = 8.854187817e-12;

	cout << "Enter the area of the covers: " << endl;
	cin >> s;

	c = epsilon * s;

	cout << "The capacitor capacity is: " << c << endl;

	system("pause");
	return 0;
}