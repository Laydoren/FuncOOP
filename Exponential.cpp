#include "Exponential.h"

using namespace std;

Exponential::Exponential(double a, double b) {
    this->a = a;
    this->b = b;
}

double Exponential::f(double x) {
    return a * exp(b * x);
}

double Exponential::differentiate(double x) {
    return a * b * exp(b * x);
}

double Exponential::integrate(double x) {
    if (b == 0.0)
        return a * x;
    return (a / b) * exp(b * x);
}

void Exponential::print(double x) {
    printf("f(%f) = %f\n", x, f(x));
}

double Exponential::minimum(double left, double right, int steps) {
    double minVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

double Exponential::maximum(double left, double right, int steps) {
    double maxVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}
