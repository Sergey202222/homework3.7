#include "Rhombus.hpp"
#include "Exception.hpp"

Rhombus::Rhombus(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(side_counts, a, b, c, d, A, B, C, D)
{
    if (a != d) throw Exception("������ �������� ������. C������ �� �����\n");
}