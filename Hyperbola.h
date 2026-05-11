#pragma once
#include "Function.h"

class Hyperbola : public Function {
    double a;
public:
    Hyperbola(double a);
    double f(double x);
    double differentiate(double x);
    double integrate(double x);
    void   print(double x);
    double minimum(double low, double hi, int steps = 1000);
    double maximum(double low, double hi, int steps = 1000);
};
