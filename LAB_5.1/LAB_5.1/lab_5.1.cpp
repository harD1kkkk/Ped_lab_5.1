#include <iostream>
#include <cmath>
using namespace std;

double h(double x, double y); 

int main() {
    double s, t;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double result = (h(s, t * t) + pow(h(t, 1 + s * s), 2)) / (1 + h(s * t, 1));
    cout << "Result = " << result << endl;

    return 0;
}

double h(double x, double y) { 
    return (x * x + sin(x * y) + y * y) / (1 + x * x + y * y);
}
