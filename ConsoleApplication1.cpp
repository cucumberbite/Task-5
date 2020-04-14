#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	setlocale(0, "");
	double x, y_0, y_1 = 0;
	cout << "Введите число, из которого требуется вычислить кубический корень: ";
	cin >> x;
	y_0 = x;
	while (true) {
		y_1 = 0.5 * (y_0 + 3 * x / (2 * y_0 * y_0 + x / y_0));
			if (abs(y_1 - y_0) < pow(10, -5))
				break;
		y_0 = y_1;
	}
	cout << "Куб. корень: " << y_0 << endl;
	return 0;
}