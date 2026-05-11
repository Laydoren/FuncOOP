#include "Parabola.h"

using namespace std;

Parabola::Parabola(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

double Parabola::f(double x) {
    return a * x * x + b * x + c;
}

double Parabola::differentiate(double x) {
    return 2.0 * a * x + b;
}

double Parabola::integrate(double x) {
    return a * x * x * x / 3.0 + b * x * x / 2.0 + c * x;
}

void Parabola::print(double x) {
    printf("f(%f) = %f\n", x, f(x));
}

double Parabola::minimum(double low, double hi, int steps) {
    double minVal = f(low);
    double step = (hi - low) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(low + i * step);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

double Parabola::maximum(double low, double hi, int steps) {
    double maxVal = f(low);
    double step = (hi - low) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(low + i * step);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}
