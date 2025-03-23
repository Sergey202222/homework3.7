#pragma once
#include "Figure.hpp"

class Triangle : public Figure
{
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
public:
    Triangle(int side_counts, int a, int b, int c, int A, int B, int C);
};