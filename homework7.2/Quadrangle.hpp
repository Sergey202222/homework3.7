#pragma once
#include "Figure.hpp"

class Quadrangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
public:
    Quadrangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D);
};