#pragma once
#include "Function.h"
#include <vector>

class Polynomial : public Function {
    std::vector<double> coeffs;
public:
    Polynomial(const std::vector<double>& coefficients);
    double f(double x);
    double differentiate(double x);
    double integrate(double x);
    void   print(double x);
    double minimum(double left, double right, int steps = 1000);
    double maximum(double left, double right, int steps = 1000);
};
