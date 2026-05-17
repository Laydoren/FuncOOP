#pragma once
#include "Function.h"

class Exponential : public Function {
    double a, b;
public:
    Exponential(double a, double b);
    double f(double x);
    double differentiate(double x);
    double integrate(double x);
    void print(double x);
    double minimum(double left, double right, int steps = 1000);
    double maximum(double left, double right, int steps = 1000);
};
