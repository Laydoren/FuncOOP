#pragma once
#include "Function.h"

class Parabola : public Function {
    double a, b, c;
public:
    Parabola(double a, double b, double c);
    double f(double x);
    double differentiate(double x);
    double integrate(double x);
    void   print(double x);
    double minimum(double low, double hi, int steps = 1000);
    double maximum(double low, double hi, int steps = 1000);
};
