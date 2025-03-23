#pragma once
#include "Parallelogram.hpp"

class Rectangle : public Parallelogram
{
public:
    Rectangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D);
};