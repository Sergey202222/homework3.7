#include "RightTriangle.hpp"
#include "Exception.hpp"
RightTriangle::RightTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    if (C != 90) throw Exception("Ошибка создания фигуры. Причина: угол C не равен 90 градусов\n");
}