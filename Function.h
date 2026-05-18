#pragma once

#include <cstdio>
#include <cmath>
#include <stdexcept>

using namespace std;

class Function {
public:
    virtual ~Function() = default;

    virtual double f(double x) = 0;
    virtual void print(double x) = 0;
    virtual double differentiate(double x) = 0;
    virtual double integrate(double x) = 0;
    virtual double minimum(double a, double b, int steps = 1000) = 0;
    virtual double maximum(double a, double b, int steps = 1000) = 0;
};
