#include "Polynomial.h"
#include <cmath>

using namespace std;

Polynomial::Polynomial(const vector<double>& coefficients) {
    this->coeffs.resize(coefficients.size());
    for (int i = 0; i < (int)coefficients.size(); i++)
        this->coeffs[i] = coefficients[i];
}

double Polynomial::f(double x) {
    double result = 0.0;
    for (int i = 0; i < (int)coeffs.size(); i++)
        result += coeffs[i] * pow(x, i);
    return result;
}

double Polynomial::differentiate(double x) {
    double result = 0.0;
    for (int i = 1; i < (int)coeffs.size(); i++)
        result += i * coeffs[i] * pow(x, i - 1);
    return result;
}

double Polynomial::integrate(double x) {
    double result = 0.0;
    for (int i = 0; i < (int)coeffs.size(); i++)
        result += coeffs[i] * pow(x, i + 1) / (i + 1);
    return result;
}

void Polynomial::print(double x) {
    printf("f(%f) = %f\n", x, f(x));
}

double Polynomial::minimum(double left, double right, int steps) {
    double minVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val < minVal) minVal = val;
    }
    return minVal;
}

double Polynomial::maximum(double left, double right, int steps) {
    double maxVal = f(left);
    double step = (right - left) / steps;
    for (int i = 1; i <= steps; i++) {
        double val = f(left + i * step);
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}
