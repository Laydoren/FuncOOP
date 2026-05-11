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

double Parabola::minimum(double lo, double hi, int steps) {
    double minVal = f(lo);
    double step = (hi - lo) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(lo + i * step);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

double Parabola::maximum(double lo, double hi, int steps) {
    double maxVal = f(lo);
    double step = (hi - lo) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(lo + i * step);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}
