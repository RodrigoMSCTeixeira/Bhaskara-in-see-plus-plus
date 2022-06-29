#include <iostream>
#include <cmath>

using namespace std;

int main() {

double a, b, c, x1, x2;

cout << "Enter the coefficient a: ";
cin >> a
cout << "Enter the coefficient b: ";
cin >> b
cout << "Enter the coefficient c: ";
cin >> c;

x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

cout << "The roots of the equation are: " << x1 << " and " << x2 << endl;

return 0;
}
