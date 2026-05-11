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

double Hyperbola::minimum(double low, double hi, int steps) {
    double minVal = f(low);
    double step = (hi - low) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(low + i * step);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

double Hyperbola::maximum(double low, double hi, int steps) {
    double maxVal = f(low);
    double step = (hi - low) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(low + i * step);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}
