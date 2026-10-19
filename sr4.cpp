#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double x, y;
    cout << "Введіть значення x (x > 0, x != 0.5): ";
    cin >> x;
    y = (x - log(x) / (2 * x - 1) + (2 * x - 1) / (x * x + 3 * x);
    cout << "y = " << y << endl;
    return 0;
}