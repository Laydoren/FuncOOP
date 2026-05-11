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

double Parabola::minimum(double left, double right, int steps) {
    double minVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

double Parabola::maximum(double left, double right, int steps) {
    double maxVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}
