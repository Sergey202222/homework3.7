#include "Triangle.hpp"
#include "Exception.hpp"
Triangle::Triangle(int side_counts, int a, int b, int c, int A, int B, int C) : Figure(side_counts)
{
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
}