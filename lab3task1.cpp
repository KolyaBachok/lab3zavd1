#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Контрольні значення змінних
    double a = -1, b = -4, c = 6.3;

    // Обчислення функції за формулою
    double numerator = sqrt(a / (b - a));
    double denominator = pow(b, 2) + a * b - abs(b + 2);
    double f = numerator / denominator;

    // Виведення результату
    cout << "f: " << f << endl;

    return 0;
}
