#include <cstdio>
#include "Hyperbola.h"
#include "Parabola.h"
#include "Exponential.h"
#include "Polynomial.h"

using namespace std;

void test(Function& fn, double x, double a, double b) {
    fn.print(x);
    printf("f'(%f) = %f\n", x, fn.differentiate(x));
    printf("min[%f, %f] = %f\n", a, b, fn.minimum(a, b));
    printf("max[%f, %f] = %f\n", a, b, fn.maximum(a, b));
    printf("F(%f) = %f\n\n", x, fn.integrate(x));
}

int main() {
    printf("Hyper\n");
    Hyperbola hyp(2.0);
    test(hyp, 2.0, 1.0, 5.0);

    printf("Parab\n");
    Parabola par(1.0, -4.0, 3.0);
    test(par, 2.0, -1.0, 5.0);

    printf("Exp\n");
    Exponential exp(2.0, 0.5);
    test(exp, 2.0, 0.0, 3.0);

    printf("Polinom\n");
    Polynomial poly({2.0, 5.0, 9.0});
    test(poly, 2.0, -2.0, 2.0);

    return 0;
}
