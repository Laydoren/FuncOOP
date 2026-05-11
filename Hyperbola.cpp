#include "Hyperbola.h"

using namespace std;

Hyperbola::Hyperbola(double a) {
    this->a = a;
}

double Hyperbola::f(double x) {
    if (x == 0.0)
        throw runtime_error("(x = 0)");
    return a / x;
}

double Hyperbola::differentiate(double x) {
    if (x == 0.0)
        throw runtime_error("(x = 0)");
    return -a / (x * x);
}

double Hyperbola::integrate(double x) {
    return a * log(fabs(x));
}

void Hyperbola::print(double x) {
    printf("f(%f) = %f\n", x, f(x));
}

double Hyperbola::minimum(double left, double right, int steps) {
    double minVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

double Hyperbola::maximum(double left, double right, int steps) {
    double maxVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}
